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
        ll n, m;
        cin >> n >> m;
        vector<ll> a(m);
        for (ll i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll ans = 0;
        for (ll i = 1; i <= n - 1; i++)
        {
            ll left = i;
            ll right = n - i;
            ll x = m - (lower_bound(a.begin(), a.end(), left) - a.begin());
            ll y = m - (lower_bound(a.begin(), a.end(), right) - a.begin());
            ans += (x * y);
            ans -= min(x, y);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}