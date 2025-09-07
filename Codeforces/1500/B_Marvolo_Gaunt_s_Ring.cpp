#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

#define LL_MIN (-5e18)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> v(3);
    for (ll i = 0; i < 3; i++)
    {
        cin >> v[i];
    }
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<vector<ll>> dp(n + 1, vector<ll>(4, LL_MIN));
    dp[n][0] = 0;
    for (ll ind = n - 1; ind >= 0; ind--)
    {
        for (int k = 0; k <= 3; k++)
        {
            ll ans = LL_MIN;
            if (k > 0)
            {
                ans = max(ans, v[3 - k] * a[ind] + dp[ind][k - 1]);
                ans = max(ans, v[3 - k] * a[ind] + dp[ind + 1][k - 1]);
            }
            ans = max(ans, 0 + dp[ind + 1][k]);
            dp[ind][k] = ans;
        }
    }
    cout << dp[0][3] << endl;

    return 0;
}