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

    ll ans = 0;
    for (ll i = max(1LL, n - 100); i <= n; i++)
    {
        for (ll j = max(1LL, n - 100); j <= n; j++)
        {
            for (ll k = max(1LL, n - 100); k <= n; k++)
            {
                ll x = (i * j) / __gcd(i, j);
                ll l = (x * k) / __gcd(x, k);
                ans = max(ans, l);
            }
        }
    }
    cout << ans << endl;

    return 0;
}