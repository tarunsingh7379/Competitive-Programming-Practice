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
    ll ma = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        ma = max(ma, a[i]);
    }
    ll ans = 0;
    vector<vector<ll>> div(ma + 1);
    for (ll i = 1; i <= ma; i++)
    {
        for (ll j = i; j <= ma; j += i)
        {
            div[j].push_back(i);
        }
    }
    vector<ll> dp(n + 1, 0);
    dp[0] = 1;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = div[a[i]].size() - 1; j >= 0; j--)
        {
            ll num = div[a[i]][j];
            if (num <= n)
                dp[num] = (dp[num] + dp[num - 1]) % M;
        }
    }
    for (ll i = 1; i <= n; i++)
        ans = (ans + dp[i]) % M;
    cout << ans << endl;

    return 0;
}