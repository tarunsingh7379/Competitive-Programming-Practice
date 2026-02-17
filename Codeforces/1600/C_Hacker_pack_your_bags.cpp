#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

typedef struct node
{
    ll l, r, c;
} node_t;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<node_t> v(n);
    for (ll i = 0; i < n; i++)
    {
        ll l, r, c;
        cin >> l >> r >> c;
        v[i] = {l, r, c};
    }
    sort(v.begin(), v.end(), [](node_t a, node_t b)
         { return a.l < b.l; });
    ll ans = 1e15;
    vector<ll> cost(1e6, 1e12);
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    for (ll i = 0; i < n; i++)
    {
        ll l = v[i].l;
        ll r = v[i].r;
        ll c = v[i].c;
        while (!pq.empty() && pq.top().first < l)
        {
            ll idx = pq.top().second;
            cost[v[idx].r - v[idx].l + 1] = min(cost[v[idx].r - v[idx].l + 1], v[idx].c);
            pq.pop();
        }
        ll d = r - l + 1;
        ll needed = k - d;
        if (needed > 0)
        {
            ans = min(ans, c + cost[needed]);
        }
        pq.push({r, i});
    }
    if (ans >= 1e12)
    {
        ans = -1;
    }
    cout << ans << endl;

    return 0;
}