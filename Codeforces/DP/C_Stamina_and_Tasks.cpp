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
        vector<pair<ll, ll>> v;
        for (ll i = 0; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;
            v.push_back({x, y});
        }
        double ans = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            double cur = v[i].first + ans * (1 - v[i].second / 100.0);
            ans = max(ans, cur);
        }

        cout << fixed << setprecision(12);
        cout << ans << endl;
        t--;
    }

    return 0;
}