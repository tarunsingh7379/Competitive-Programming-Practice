#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> v(n + 1, 0);
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        l--;
        r--;
        v[l]++;
        v[r + 1]--;
    }
    vector<ll> f(n, 0);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += v[i];
        f[i] = sum;
    }
    sort(f.begin(), f.end());
    sort(a.begin(), a.end());
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans = ans + f[i] * a[i];
    }
    cout << ans << endl;
    return 0;
}