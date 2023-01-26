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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            ll mi = min(b, c);
            ll ans = a + 2 * mi;
            ll x = max(b, c) - mi + d;
            ans += (min(a + 1, x));
            cout << ans << endl;
        }
        t--;
    }

    return 0;
}