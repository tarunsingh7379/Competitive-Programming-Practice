#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll dfs(ll node, vector<ll> &vis, vector<ll> &cost, vector<vector<ll>> &adj)
{
    vis[node] = 1;
    ll ans = cost[node];
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            ans = min(ans, dfs(it, vis, cost, adj));
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<vector<ll>> adj(n + 1);
    for (ll i = 0; i < m; i++)
    {
        ll x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    ll ans = 0;
    vector<ll> vis(n + 1, 0);
    for (ll i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            ans += dfs(i, vis, a, adj);
        }
    }
    cout << ans << endl;

    return 0;
}