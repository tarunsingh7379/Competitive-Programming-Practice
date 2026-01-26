#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<pair<ll, ll>> v;
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        v.push_back({y, x});
    }
    sort(v.begin(), v.end());
    ll ans = 1, last = v[0].first;
    for (ll i = 1; i < n; i++)
    {
        if (v[i].second > last)
        {
            ans++;
            last = v[i].first;
        }
    }
    cout << ans << endl;

    return 0;
}