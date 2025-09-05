#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

double dfs(int node, vector<int> &vis, vector<vector<int>> &adj)
{
    vis[node] = 1;
    int visited = 0;
    double sum = 0;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            sum = sum + 1 + dfs(it, vis, adj);
            visited++;
        }
    }
    if (visited == 0)
    {
        return 0;
    }
    return sum / visited;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<vector<int>> adj(n);
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> vis(n, 0);
    double ans = dfs(0, vis, adj);
    cout << fixed << setprecision(15);
    cout << ans << endl;

    return 0;
}