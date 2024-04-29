#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool cmp(pair<ll, ll> &a, pair<ll, ll> &b)
{
    ll d1 = a.second - a.first;
    ll d2 = b.second - b.first;
    if (d1 > d2)
    {
        return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin >> n >> k;
    ll a[n], b[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<pair<ll, ll>> v;
    for (ll i = 0; i < n; i++)
    {
        v.push_back({a[i], b[i]});
    }
    sort(v.begin(), v.end(), cmp);
    ll ans = 0;
    for (ll i = 0; i < k; i++)
    {
        ans += v[i].first;
    }
    for (ll i = k; i < n; i++)
    {
        ans += min(v[i].first, v[i].second);
    }
    cout << ans << endl;

    return 0;
}