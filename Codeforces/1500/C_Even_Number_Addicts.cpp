#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int dp[101][101][2][2];

int func(int e, int o, int sum, int turn)
{
    if (e == 0 && o == 0)
    {
        if (sum == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if (dp[e][o][sum][turn] != -1)
    {
        return dp[e][o][sum][turn];
    }
    int ans = 0;
    if (turn == 0)
    {
        ans = 0;
        if (e > 0)
        {
            ans = ans | func(e - 1, o, sum, 1);
        }
        if (o > 0)
        {
            ans = ans | func(e, o - 1, (sum + 1) % 2, 1);
        }
    }
    else
    {
        ans = 1;
        if (e > 0)
        {
            ans = ans & func(e - 1, o, sum, 0);
        }
        if (o > 0)
        {
            ans = ans & func(e, o - 1, sum, 0);
        }
    }
    return dp[e][o][sum][turn] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < 0)
            {
                a[i] = -a[i];
            }
            if (a[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        memset(dp, -1, sizeof(dp));
        int ans = func(even, odd, 0, 0);
        cout << (ans == 1 ? "Alice" : "Bob") << endl;
        t--;
    }

    return 0;
}