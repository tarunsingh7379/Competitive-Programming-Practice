#include <bits/stdc++.h>
typedef long long int ll;
#define M 998244353
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll a[n], b[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 0; i < n; i++)
        cin >> b[i];
    vector<ll> val;
    for (ll i = 0; i < n; i++)
    {
        ll x = (i + 1) * (n - i) * a[i];
        val.push_back(x);
    }
    sort(val.begin(), val.end());
    sort(b, b + n);
    reverse(b, b + n);
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans = (ans + (val[i] % M * (b[i] % M)) % M) % M;
    }
    cout << ans << endl;

    return 0;
}