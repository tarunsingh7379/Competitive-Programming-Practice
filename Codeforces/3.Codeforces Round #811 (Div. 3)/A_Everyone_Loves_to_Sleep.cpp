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
        ll n, h, m;
        cin >> n >> h >> m;
        ll curr = h * 60 + m;
        ll total = INT_MAX;
        for (ll i = 0; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;
            ll z = x * 60 + y;
            if (z >= curr)
            {
                ll d = z - curr;
                if (d < total)
                {
                    total = d;
                }
            }
            else
            {
                ll d = 24 * 60 - curr + z;
                total = min(total, d);
            }
        }
        cout << total / 60 << " " << total % 60 << endl;

        t--;
    }

    return 0;
}