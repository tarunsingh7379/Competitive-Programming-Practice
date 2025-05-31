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
    vector<pair<ll, ll>> v;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back({x, i});
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    ll ans = 0;
    vector<ll> ind;
    for (ll i = 0; i < m * k; i++)
    {
        ans += v[i].first;
        ind.push_back(v[i].second);
    }
    sort(ind.begin(), ind.end());
    vector<ll> res;
    ll j = m - 1;
    for (ll i = 0; i < k - 1; i++)
    {
        res.push_back(ind[j]);
        j += m;
    }
    cout << ans << endl;
    for (auto num : res)
    {
        cout << num + 1 << " ";
    }
    cout << endl;

    return 0;
}