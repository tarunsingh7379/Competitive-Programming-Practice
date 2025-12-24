#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, sz;
    cin >> n >> sz;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    ll k = (8 * sz) / n;
    ll max_distinct = 0;
    if (k >= 20)
        max_distinct = n;
    else
        max_distinct = min(n, (1LL << k));
    ll ans = 0;
    vector<pair<ll, ll>> v;
    map<ll, ll> mp;
    for (auto num : a)
    {
        mp[num]++;
    }
    for (auto it : mp)
    {
        v.push_back({it.first, it.second});
    }
    vector<ll> prefix(v.size(), 0);
    prefix[0] = v[0].second;
    for (ll i = 1; i < v.size(); i++)
    {
        prefix[i] = prefix[i - 1] + v[i].second;
    }
    ans = INT_MAX;
    for (ll i = max_distinct - 1; i < v.size(); i++)
    {
        ll left = 0;
        if (i - max_distinct >= 0)
            left = prefix[i - max_distinct];
        ll right = prefix.back() - prefix[i];
        ans = min(ans, left + right);
    }
    if (ans == INT_MAX)
        ans = 0;
    cout << ans << endl;

    return 0;
}