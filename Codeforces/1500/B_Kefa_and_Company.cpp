#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> v;
    for (ll i = 0; i < n; i++)
    {
        ll m, f;
        cin >> m >> f;
        v.push_back({m, f});
    }
    sort(v.begin(), v.end());
    ll ans = v[0].second;
    ll l = 0;
    ll sum = v[0].second;
    for (ll r = 1; r < n; r++)
    {
        sum += v[r].second;
        if (v[r].first - v[l].first >= k)
        {
            while (l <= r)
            {
                sum -= v[l].second;
                l++;
                if (v[r].first - v[l].first < k)
                {
                    break;
                }
            }
        }
        ans = max(ans, sum);
    }
    cout << ans << endl;
    return 0;
}