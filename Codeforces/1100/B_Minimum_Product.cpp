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
        ll a, b, x, y, n;
        cin >> a >> b >> x >> y >> n;

        ll ans = 2e18;

        if ((a - n) >= x)
        {
            ans = min(ans, (a - n) * b);
        }
        else
        {
            ans = min(ans, x * (max(y, b - (n - (a - x)))));
        }

        if ((b - n) >= y)
        {
            ans = min(ans, (b - n) * a);
        }
        else
        {
            ans = min(ans, y * (max(x, a - (n - (b - y)))));
        }

        cout << ans << endl;

        t--;
    }

    return 0;
}