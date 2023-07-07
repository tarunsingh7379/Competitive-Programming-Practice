#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int dp[101][2][101];

int func(int ind, int start, int k, vector<int> &a)
{
    if (k < 0)
    {
        return 1e8;
    }
    if (ind >= a.size())
    {
        if (k == 0)
        {
            return 0;
        }
        return 1e8;
    }
    if (dp[ind][start][k] != -1)
    {
        return dp[ind][start][k];
    }
    int ans = 1e8;
    if (start == 1)
    {
        if (ind + 1 < a.size())
        {
            ans = min(ans, func(ind + 1, 0, k, a));
        }
        else
        {
            ans = min(ans, func(ind + 1, 0, k - 1, a));
        }
        ans = min(ans, func(ind + 1, 1, k - 1, a));
    }
    else
    {
        if (ind + 1 < a.size())
        {
            ans = min(ans, abs(a[ind] - a[ind - 1]) + func(ind + 1, 0, k, a));
        }
        else
        {
            ans = min(ans, abs(a[ind] - a[ind - 1]) + func(ind + 1, 0, k - 1, a));
        }
        ans = min(ans, abs(a[ind] - a[ind - 1]) + func(ind + 1, 1, k - 1, a));
    }
    return dp[ind][start][k] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        memset(dp, -1, sizeof(dp));
        int ans = func(0, 1, k, a);
        cout << ans << endl;
        t--;
    }

    return 0;
}