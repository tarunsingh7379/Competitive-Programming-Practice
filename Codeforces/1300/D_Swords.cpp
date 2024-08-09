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
    ll sum = 0;
    ll g = 0, ma = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        ma = max(ma, a[i]);
    }

    for (ll i = 0; i < n; i++)
    {
        g = __gcd(g, ma - a[i]);
    }

    ll ans = (ma * n - sum) / g;
    cout << ans << " " << g << endl;

    return 0;
}