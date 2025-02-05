#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool cmp(pair<ll, ll> &a, pair<ll, ll> &b)
{
    if (a.first == b.first)
        return a.second > b.second;
    return a.first < b.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> v;
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    ll ans = 0, prev = 0;
    for (ll i = 1; i <= 3001; i++)
    {
        ll cur = 0;
        for (ll j = 0; j < n; j++)
        {
            if (v[j].first == i)
            {
                cur += v[j].second;
            }
        }
        if (cur + prev <= k)
        {
            ans += (cur + prev);
            prev = 0;
        }
        else
        {
            ans += k;
            prev = cur - max(0LL, k - prev);
        }
    }
    cout << ans << endl;
    return 0;
}