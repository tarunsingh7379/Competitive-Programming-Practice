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
        ll ans = 0, x = INT_MAX, y = INT_MAX;
        for (ll i = 0; i < n; i++)
        {
            ll sz;
            cin >> sz;
            ll a[sz];
            for (ll j = 0; j < sz; j++)
            {
                cin >> a[j];
            }
            sort(a, a + sz);
            x = min(x, a[0]);
            y = min(y, a[1]);
            ans += a[1];
        }
        ans -= y;
        ans += x;
        cout << ans << endl;
        t--;
    }

    return 0;
}