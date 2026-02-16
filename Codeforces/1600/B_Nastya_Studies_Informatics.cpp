#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll l, r, x, y;
    cin >> l >> r >> x >> y;
    if (y % x != 0)
    {
        cout << 0 << endl;
    }
    else
    {
        ll z = y / x;
        ll ans = 0;
        for (ll i = 1; i * i <= z; i++)
        {
            if (z % i == 0)
            {
                ll c = i;
                ll d = z / i;
                if (__gcd(c, d) == 1 && c * x >= l && c * x <= r && d * x >= l && d * x <= r)
                {
                    ans++;
                    if (c != d)
                    {
                        ans++;
                    }
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}