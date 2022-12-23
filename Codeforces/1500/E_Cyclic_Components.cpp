#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int dfs(int node, vector<int> &vis, vector<vector<int>> &adj)
{
    vis[node] = 1;
    int ans = 1;
    if (adj[node].size() != 2)
    {
        ans = 0;
    }
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            ans = ans & dfs(it, vis, adj);
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
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int ans = 0;
    vector<int> vis(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            if (dfs(i, vis, adj))
            {
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}