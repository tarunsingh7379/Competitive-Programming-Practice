#include <bits/stdc++.h>
typedef long long int ll;
#define M 998244353
using namespace std;

ll power(ll base, ll n, ll m)
{
    ll ans = 1;
    base = base % m;
    while (n != 0)
    {
        if (n % 2 == 1)
        {
            n = n - 1;
            ans = (ans * base) % m;
        }
        else
        {
            n = n / 2;
            base = (base * base) % m;
        }
    }
    return ans;
}

ll modinv(ll x)
{
    return (power(x, M - 2, M)) % M;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    ll base = 1;
    vector<vector<pair<ll, ll>>> seg(m + 1);
    for (ll i = 0; i < n; i++)
    {
        ll l, r, p, q;
        cin >> l >> r >> p >> q;

        base = (1LL * base % M * ((((q - p) % M) * modinv(q)) % M)) % M;
        ll w = (p % M * modinv(q - p)) % M;
        seg[r].push_back({l, w});
    }
    vector<ll> dp(m + 1, 0);
    dp[0] = base;
    for (ll i = 1; i <= m; i++)
    {
        for (auto [l, w] : seg[i])
        {
            dp[i] = (dp[i] + (dp[l - 1] * w) % M) % M;
        }
    }
    cout << dp[m] << endl;

    return 0;
}