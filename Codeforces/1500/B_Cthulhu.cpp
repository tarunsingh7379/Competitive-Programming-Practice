#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

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

    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if (n == m)
    {
        vector<int> vis(n, 0);
        dfs(0, vis, adj);
        bool ok = true;
        for (auto num : vis)
        {
            if (!num)
            {
                ok = false;
                break;
            }
        }
        cout << (ok ? "FHTAGN!" : "NO") << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}