#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool cmp(pair<ll, ll> &a, pair<ll, ll> &b)
{
    ll d1 = a.first - a.second;
    ll d2 = b.first - b.second;
    return d1 <= d2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll b[n];
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
    ll l = 0;
    ll ans = 0;
    while (l < n && k > 0)
    {
        ans += v[l].first;
        l++;
        k--;
    }
    while (l < n)
    {
        ans += min(v[l].first, v[l].second);
        l++;
    }
    cout << ans << endl;
    return 0;
}