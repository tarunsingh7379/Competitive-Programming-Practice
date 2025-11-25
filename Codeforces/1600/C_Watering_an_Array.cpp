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
        ll n, k, d;
        cin >> n >> k >> d;
        ll a[n], b[k];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < k; i++)
        {
            cin >> b[i];
        }
        ll ans = 0;
        for (ll i = 1; i <= d && i <= 2 * n; i++)
        {
            ll cost = 0;
            for (ll j = 0; j < n; j++)
            {
                if (a[j] == (j + 1))
                {
                    cost++;
                }
            }
            ll extra = (d - i) / 2;
            ll total = cost + extra;
            ans = max(ans, total);
            for (ll j = 0; j < b[(i - 1) % k]; j++)
            {
                a[j]++;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}