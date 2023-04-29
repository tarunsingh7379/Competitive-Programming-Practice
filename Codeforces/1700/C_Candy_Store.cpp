#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n;
        cin >> n;
        ll g = 0, l = 1;
        ll ans = 1;
        for (ll i = 0; i < n; i++)
        {
            ll a, b;
            cin >> a >> b;
            g = __gcd(g, a * b);
            l = l * b / __gcd(l, b);
            if (g % l != 0)
            {
                ans++;
                g = a * b;
                l = b;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}