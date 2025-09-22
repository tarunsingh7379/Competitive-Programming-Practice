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
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                ans += a[i];
            }
            else
            {
                ans -= a[i];
            }
        }
        ll extra = 0;
        if (n % 2 == 0)
        {
            extra = n - 2;
        }
        else
        {
            extra = n - 1;
        }
        ll x = 1e12, y = -1e12;
        for (ll i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                extra = max(extra, i - 2 * a[i] + y);
                x = min(x, 2 * a[i] + i);
            }
            else
            {
                extra = max(extra, i + 2 * a[i] - x);
                y = max(y, 2 * a[i] - i);
            }
        }

        ans += extra;
        cout << ans << endl;
        t--;
    }

    return 0;
}