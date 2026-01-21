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
    ll g = 0;
    ll a[n], b[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        ll p = a[i] * b[i];
        g = __gcd(g, p);
    }
    if (g == 1)
    {
        cout << -1 << endl;
    }
    else
    {
        ll ans = g;
        for (ll i = 0; i < n; i++)
        {
            ll temp = __gcd(ans, a[i]);
            if (temp == 1)
            {
                temp = __gcd(ans, b[i]);
            }
            ans = temp;
        }
        cout << ans << endl;
    }

    return 0;
}