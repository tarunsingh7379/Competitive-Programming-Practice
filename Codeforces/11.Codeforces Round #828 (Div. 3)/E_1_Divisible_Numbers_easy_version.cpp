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
        int flag = 0;
        ll p = a * b;
        for (ll x = a + 1; x <= c; x++)
        {
            ll g = __gcd(x, p);
            ll req = p / g;
            ll y = (b / req + 1) * req;
            if (y <= d)
            {
                cout << x << " " << y << endl;
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            cout << -1 << " " << -1 << endl;
        }

        t--;
    }

    return 0;
}