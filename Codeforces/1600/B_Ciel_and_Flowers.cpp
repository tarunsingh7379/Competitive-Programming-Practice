#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll r, g, b;
    cin >> r >> g >> b;

    ll ans = 0;
    ll mi = min({r, g, b});
    for (ll i = 0; i <= 3; i++)
    {
        ll cnt = 0;
        ll x = r, y = g, z = b;
        if (i <= mi)
        {
            cnt = i;
            x -= i;
            y -= i;
            z -= i;
            cnt = cnt + x / 3 + y / 3 + z / 3;
        }
        ans = max(ans, cnt);
    }

    cout << ans << endl;

    return 0;
}