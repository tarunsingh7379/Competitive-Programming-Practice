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
        ll n, x, y, d;
        cin >> n >> x >> y >> d;
        ll ans = INT_MAX;

        if (abs(x - y) % d == 0)
        {
            ans = min(ans, abs(x - y) / d);
        }
        if ((y - 1) % d == 0)
        {
            ans = min(ans, (y - 1) / d + (x - 1 + d - 1) / d);
        }
        if ((n - y) % d == 0)
        {
            ans = min(ans, (n - y) / d + (n - x + d - 1) / d);
        }
        if (ans == INT_MAX)
        {
            ans = -1;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}