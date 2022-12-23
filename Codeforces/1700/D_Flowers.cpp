#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll q, k;
    cin >> q >> k;

    vector<ll> dp(100005, 0);
    for (ll i = 0; i < k; i++)
    {
        dp[i] = 1;
    }

    for (ll i = k; i <= 100001; i++)
    {
        dp[i] = (dp[i - 1] + dp[i - k]) % M;
    }

    vector<ll> prefix(100005, 0);
    prefix[0] = dp[0];
    for (ll i = 1; i <= 100001; i++)
    {
        prefix[i] = (prefix[i - 1] + dp[i]) % M;
    }

    while (q--)
    {
        ll a, b;
        cin >> a >> b;
        ll ans = (prefix[b] - prefix[a - 1] + M) % M;
        cout << ans << endl;
    }

    return 0;
}