#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll m;
    cin >> m;
    ll q[m];
    for (ll i = 0; i < m; i++)
    {
        cin >> q[i];
    }
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(q, q + m);
    sort(a, a + n, greater<ll>());
    ll ans = 0;
    for (ll i = 0; i < n; i += (q[0] + 2))
    {
        for (ll j = i; j < min(n, i + q[0]); j++)
        {
            ans += a[j];
        }
    }
    cout << ans << endl;

    return 0;
}