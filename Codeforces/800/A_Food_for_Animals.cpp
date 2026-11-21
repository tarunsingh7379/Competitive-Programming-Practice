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
        ll a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        x -= a;
        y -= b;
        if (x > 0 && x <= c)
        {
            c -= x;
            x = 0;
        }
        if (y > 0 && y <= c)
        {
            y = 0;
        }
        if (x <= 0 && y <= 0)
            cout << "YES\n";
        else
            cout << "NO\n";
        t--;
    }

    return 0;
}