#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        ll h, c, t;
        cin >> h >> c >> t;
        if (h + c - 2 * t >= 0)
        {
            cout << 2 << endl;
        }
        else if (h == t)
        {
            cout << 1 << endl;
        }
        else
        {
            ll up = h - t;
            ll down = 2 * t - h - c;
            ll k1 = up / down;
            ll k2 = (up + down - 1) / down;
            ll val1 = abs(h * (k1 + 1) + c * k1 - t * (2 * k1 + 1)) * (2 * k2 + 1);
            ll val2 = abs(h * (k2 + 1) + c * k2 - t * (2 * k2 + 1)) * (2 * k1 + 1);
            if (val1 <= val2)
            {
                cout << 2 * k1 + 1 << endl;
            }
            else
            {
                cout << 2 * k2 + 1 << endl;
            }
        }
    }

    return 0;
}