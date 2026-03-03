#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll dfs(ll node, ll dist, ll mdist, vector<ll> &a, vector<vector<pair<ll, ll>>> &adj)
{
    if (dist - mdist > a[node])
    {
        return 0;
    }
    ll size = 1;
    for (auto it : adj[node])
    {
        size += dfs(it.first, dist + it.second, min(mdist, dist), a, adj);
    }
    return size;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<vector<pair<ll, ll>>> adj(n + 1);
    for (ll i = 1; i <= n - 1; i++)
    {
        ll p, c;
        cin >> p >> c;
        adj[p].push_back({i + 1, c});
    }
    ll rem = dfs(1, 0, 0, a, adj);
    cout << n - rem << endl;
    return 0;
}