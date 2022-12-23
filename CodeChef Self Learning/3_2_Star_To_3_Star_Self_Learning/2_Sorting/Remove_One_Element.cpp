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
        sort(a, a + n);
        ll b[n - 1];
        for (ll i = 0; i < n - 1; i++)
        {
            cin >> b[i];
        }
        sort(b, b + n - 1);
        ll ans = 1e10;
        if (n == 2)
        {
            ans = b[0] - a[0];
            if ((b[0] - a[1]) > 0)
            {
                ans = min(ans, b[0] - a[1]);
            }
        }
        else
        {
            if (b[0] - a[0] > 0 && b[0] - a[0] == b[n - 2] - a[n - 1])
            {
                ans = min(ans, b[0] - a[0]);
            }
            if (b[0] - a[1] > 0 && b[0] - a[1] == b[n - 2] - a[n - 1])
            {
                ans = min(ans, b[0] - a[1]);
            }
            if (b[0] - a[0] > 0 && b[0] - a[0] == b[n - 2] - a[n - 2])
            {
                ans = min(ans, b[0] - a[0]);
            }
            if (b[0] - a[1] > 0 && b[0] - a[1] == b[n - 2] - a[n - 2])
            {
                ans = min(ans, b[0] - a[1]);
            }
        }

        cout << ans << endl;
        t--;
    }

    return 0;
}