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
        ll n, x;
        cin >> n >> x;
        vector<pair<ll, ll>> v;
        for (ll i = 0; i < n; i++)
        {
            ll s, r;
            cin >> s >> r;
            v.push_back({r, s});
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            if (v[i].second <= x)
            {
                ans = v[i].first;
                break;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}