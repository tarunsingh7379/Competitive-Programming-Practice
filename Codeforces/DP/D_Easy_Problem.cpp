#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    string t = "hard";
    vector<vector<ll>> dp(n + 1, vector<ll>(5, LLONG_MAX));
    dp[0][0] = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < 4; j++)
        {
            if (dp[i][j] == LLONG_MAX)
                continue;
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j] + a[i]);
            if (s[i] == t[j])
            {
                dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j]);
            }
            else
            {
                dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
            }
        }
    }
    ll ans = LLONG_MAX;
    for (ll i = 0; i < 4; i++)
    {
        ans = min(ans, dp[n][i]);
    }
    cout << ans << endl;
    return 0;
}