#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll get_ind(ll val, vector<pair<ll, ll>> &v)
{
    ll ans = -1;
    ll l = 0, r = v.size() - 1;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (v[mid].first < val)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
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
        ll x;
        cin >> x;
        v.push_back({x, i});
    }
    vector<ll> freq(n, 0);
    for (ll i = 0; i < k; i++)
    {
        ll x, y;
        cin >> x >> y;
        x--;
        y--;
        if (v[x].first < v[y].first)
        {
            freq[y]++;
        }
        else if (v[y].first < v[x].first)
        {
            freq[x]++;
        }
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    vector<ll> ans(n, 0);
    for (ll i = 0; i < n; i++)
    {
        ll ind = get_ind(v[i].first, v);
        ll res = 0;
        if (ind != -1)
        {
            res = n - ind - freq[v[i].second];
        }
        ans[v[i].second] = res;
    }
    for (auto num : ans)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}