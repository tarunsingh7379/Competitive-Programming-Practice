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
        vector<vector<ll>> v(n + 1);
        for (ll i = 0; i < m; i++)
        {
            ll x, y;
            cin >> x >> y;
            if (x > y)
            {
                swap(x, y);
            }
            v[y].push_back(x);
        }
        ll ans = 0, l = 1;
        for (ll r = 1; r <= n; r++)
        {
            for (auto num : v[r])
            {
                l = max(l, num + 1);
            }
            ans += (r - l + 1);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}