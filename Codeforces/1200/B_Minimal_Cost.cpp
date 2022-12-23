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
        ll n, v, h;
        cin >> n >> v >> h;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = INT_MAX;
        ll flag = 0;
        for (ll i = 0; i < (n - 1); i++)
        {
            ll d = abs(a[i] - a[i + 1]);
            if (d == 0)
            {
                ans = min(ans, 2 * h);
                ans = min(ans, v + h);
            }
            if (d == 1)
            {
                ans = min(ans, v);
                ans = min(ans, h);
            }
            if (d > 1)
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << ans << endl;
        }
        t--;
    }

    return 0;
}