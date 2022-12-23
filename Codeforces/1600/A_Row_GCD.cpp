#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    ll a[n], b[m];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    sort(a, a + n);

    for (ll i = 1; i < n; i++)
    {
        a[i] = a[i] - a[0];
    }
    ll g = 0;
    for (ll i = 1; i < n; i++)
    {
        g = __gcd(g, a[i]);
    }
    for (ll i = 0; i < m; i++)
    {
        ll ans = __gcd(g, a[0] + b[i]);
        cout << ans << " ";
    }
    cout << endl;
    return 0;
}