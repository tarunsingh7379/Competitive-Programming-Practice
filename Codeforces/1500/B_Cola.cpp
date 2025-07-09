#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    ll ans = 0;
    for (ll i = 0; i <= a; i += 2)
    {
        for (ll j = 0; j <= b; j++)
        {
            ll req = (n - j - i / 2);
            if (req < 0 || req % 2 != 0)
            {
                continue;
            }
            ll x = req / 2;
            if (x <= c)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}
