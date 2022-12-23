#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> prefix(n);
    prefix[0] = a[0];
    for (ll i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i];
    }
    vector<vector<ll>> dp(n + 1, vector<ll>(k + 1, 0));
    for (ll ind = n - 1; ind >= 0; ind--)
    {
        for (ll kk = 1; kk <= k; kk++)
        {
            ll pick = 0;
            if (ind + m - 1 < a.size())
            {
                pick = prefix[ind + m - 1];
                if (ind - 1 >= 0)
                {
                    pick -= prefix[ind - 1];
                }
                pick = pick + dp[ind + m][kk - 1];
            }
            ll notpick = dp[ind + 1][kk];
            dp[ind][kk] = max(pick, notpick);
        }
    }
    ll ans = dp[0][k];
    cout << ans << endl;
    return 0;
}