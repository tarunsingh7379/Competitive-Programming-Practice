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
        ll m, x, y;
        cin >> m >> x >> y;
        ll a[m];
        for (ll i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        sort(a, a + m);
        ll n = 100;
        ll ans[n] = {0};
        for (ll i = 0; i < m; i++)
        {
            ll l = max(0LL, a[i] - 1 - x * y);
            ll r = min(n - 1, a[i] - 1 + x * y);
            for (ll j = l; j <= r; j++)
            {
                ans[j] = 1;
            }
        }
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            if (ans[i] == 0)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
        t--;
    }

    return 0;
}