#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, a, b;
    cin >> n >> a >> b;
    ll d = a, e = 5 * b;
    ll ans = n;
    for (ll i = 0; i <= n; i += e)
    {
        ll x = n - i;
        if (x >= 0)
        {
            x = x % d;
        }
        ans = min(ans, x);
    }
    cout << ans << endl;
    return 0;
}