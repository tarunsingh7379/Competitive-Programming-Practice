#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, k;
    cin >> n >> m >> k;
    ll x, s;
    cin >> x >> s;
    vector<ll> a(m), b(m), c(k), d(k);
    for (ll i = 0; i < m; i++)
        cin >> a[i];
    for (ll i = 0; i < m; i++)
        cin >> b[i];
    for (ll i = 0; i < k; i++)
        cin >> c[i];
    for (ll i = 0; i < k; i++)
        cin >> d[i];

    ll ans = x * n;
    for (ll i = 0; i < m; i++)
    {
        if (b[i] <= s)
        {
            ll rem = s - b[i];
            ll new_x = a[i];
            ll idx = upper_bound(d.begin(), d.end(), rem) - d.begin() - 1;
            ll new_n = n;
            if (idx >= 0)
            {
                new_n -= c[idx];
            }
            if (new_n > 0)
            {
                ans = min(ans, new_x * new_n);
            }
            else
            {
                ans = 0;
            }
        }
    }
    ll idx = upper_bound(d.begin(), d.end(), s) - d.begin() - 1;
    ll new_n = n;
    if (idx >= 0)
    {
        new_n -= c[idx];
    }
    if (new_n > 0)
    {
        ans = min(ans, x * new_n);
    }
    else
    {
        ans = 0;
    }
    cout << ans << endl;

    return 0;
}