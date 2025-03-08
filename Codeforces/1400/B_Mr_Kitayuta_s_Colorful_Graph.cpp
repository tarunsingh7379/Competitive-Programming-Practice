#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool dfs(int u, int v, int c, vector<int> &vis,
         vector<vector<pair<int, int>>> &adj)
{
    if (u == v)
    {
        return true;
    }
    vis[u] = 1;
    bool ans = false;
    for (auto it : adj[u])
    {
        if (!vis[it.first] && it.second == c)
        {
            ans |= dfs(it.first, v, c, vis, adj);
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<vector<pair<int, int>>> adj(n);
    for (int i = 0; i < m; i++)
    {
        int u, v, c;
        cin >> u >> v >> c;
        u--;
        v--;
        adj[u].push_back({v, c});
        adj[v].push_back({u, c});
    }

    int q;
    cin >> q;
    while (q--)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        int ans = 0;
        for (int i = 1; i <= m; i++)
        {
            vector<int> vis(n, 0);
            if (dfs(u, v, i, vis, adj))
            {
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}