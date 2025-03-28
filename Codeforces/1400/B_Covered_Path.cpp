#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int dp[101][2000];

int func(int ind, int last, int final, int t, int d)
{
    if (last <= 0)
        return -1e8;
    if (ind == t - 1)
    {
        if (last == final)
        {
            return last;
        }
        return -1e8;
    }
    if (dp[ind][last] != -1)
    {
        return dp[ind][last];
    }
    int ans = -1e8;
    for (int i = 0; i <= d; i++)
    {
        ans = max(ans, last + func(ind + 1, last + i, final, t, d));
        ans = max(ans, last + func(ind + 1, last - i, final, t, d));
    }
    return dp[ind][last] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int v1, v2;
    cin >> v1 >> v2;
    int t, d;
    cin >> t >> d;
    memset(dp, -1, sizeof(dp));
    cout << func(0, v1, v2, t, d) << endl;

    return 0;
}