#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<vector<ll>> dp(n + 5, vector<ll>(n + 5, 0));
    for (ll i = n - 1; i >= 0; i--)
    {
        dp[i][i] = 1;
        for (ll j = i + 1; j < n; j++)
        {
            dp[i][j] = 1 + dp[i + 1][j];
            if (a[i] == a[i + 1])
                dp[i][j] = min(dp[i][j], 1 + dp[i + 2][j]);
            for (ll k = i + 2; k < j; k++)
            {
                if (a[i] == a[k])
                {
                    dp[i][j] = min(dp[i][j], dp[i + 1][k - 1] + dp[k + 1][j]);
                }
            }
            if (j - i >= 2 && a[i] == a[j])
            {
                dp[i][j] = min(dp[i][j], dp[i + 1][j - 1]);
            }
        }
    }
    cout << dp[0][n - 1] << endl;

    return 0;
}