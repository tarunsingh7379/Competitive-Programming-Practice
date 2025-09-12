#include <bits/stdc++.h>
typedef long long int ll;
#define M 998244353
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, k;
    cin >> n >> m >> k;
    ll dp[n + 1][k + 1];
    memset(dp, 0, sizeof(dp));
    dp[1][0] = m;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (j > 0)
                dp[i][j] = (dp[i][j] + ((dp[i - 1][j - 1] * (m - 1))) % M) % M;
        }
    }
    cout << dp[n][k] << endl;

    return 0;
}