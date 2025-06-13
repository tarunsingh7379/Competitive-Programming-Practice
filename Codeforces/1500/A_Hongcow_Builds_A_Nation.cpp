#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int dfs(int node, vector<int> &vis, vector<vector<int>> &adj)
{
    vis[node] = 1;
    int ans = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            ans += dfs(it, vis, adj);
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> spec;
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        x--;
        spec.push_back(x);
    }
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
    vector<int> vis(n, 0);
    vector<int> sz;
    for (auto num : spec)
    {
        if (!vis[num])
            sz.push_back(dfs(num, vis, adj));
    }
    sort(sz.begin(), sz.end());
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            sz.back()++;
        }
    }
    ll ans = 0;
    for (auto num : sz)
    {
        ans = ans + (num * (num - 1) / 2);
    }
    ans -= m;
    cout << ans << endl;

    return 0;
}