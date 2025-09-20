#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll parent[200005];
ll sz[200005];

ll findParent(ll node)
{
    if (parent[node] == node)
    {
        return node;
    }
    return parent[node] = findParent(parent[node]);
}

void uni(ll u, ll v)
{
    ll paru = findParent(u);
    ll parv = findParent(v);
    if (sz[paru] < sz[parv])
    {
        parent[paru] = parv;
        sz[parv] += sz[paru];
    }
    else
    {
        parent[parv] = paru;
        sz[paru] += sz[parv];
    }
}

void init(ll n)
{
    for (ll i = 1; i <= n; i++)
    {
        parent[i] = i;
        sz[i] = 1;
    }
}

void dfs(int node, vector<int> &vis, vector<vector<int>> &adj)
{
    vis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, vis, adj);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        int n, m1, m2;
        cin >> n >> m1 >> m2;
        init(n);
        vector<pair<int, int>> edges;
        for (int i = 0; i < m1; i++)
        {
            int u, v;
            cin >> u >> v;
            edges.push_back({u, v});
        }
        vector<vector<int>> adj_g(n + 1);
        for (int i = 0; i < m2; i++)
        {
            int u, v;
            cin >> u >> v;
            uni(u, v);
            adj_g[u].push_back(v);
            adj_g[v].push_back(u);
        }
        vector<vector<int>> adj(n + 1);
        int ans = 0;
        for (auto num : edges)
        {
            if (findParent(num.first) == findParent(num.second))
            {
                adj[num.first].push_back(num.second);
                adj[num.second].push_back(num.first);
            }
            else
            {
                ans++;
            }
        }
        int cnt_f = 0;
        vector<int> vis(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            if (!vis[i])
            {
                cnt_f++;
                dfs(i, vis, adj);
            }
        }
        int cnt_g = 0;
        vector<int> vis_g(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            if (!vis_g[i])
            {
                cnt_g++;
                dfs(i, vis_g, adj_g);
            }
        }
        ans = ans + (cnt_f - cnt_g);
        cout << ans << endl;
        t--;
    }

    return 0;
}