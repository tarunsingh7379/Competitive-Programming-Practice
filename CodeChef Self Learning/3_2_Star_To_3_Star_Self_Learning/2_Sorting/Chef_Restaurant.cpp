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
        vector<pair<ll, ll>> v;
        for (ll i = 0; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;
            v.push_back({x, y});
        }
        sort(v.begin(), v.end());
        while (m--)
        {
            ll time;
            cin >> time;

            ll l = 0, r = n - 1;
            ll ans = 1e10;
            while (l <= r)
            {
                ll mid = (l + r) / 2;
                if (time <= v[mid].first)
                {
                    ans = min(ans, v[mid].first - time);
                    r = mid - 1;
                }
                else if (time < v[mid].second)
                {
                    ans = 0;
                    break;
                }
                else
                {
                    l = mid + 1;
                }
            }
            if (ans == 1e10)
            {
                ans = -1;
            }
            cout << ans << endl;
        }

        t--;
    }

    return 0;
}