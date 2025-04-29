#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int dfs(int node, int &ans, vector<int> &vis, vector<vector<int>> &adj)
{
    vis[node] = 1;
    ll cnt = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            int x = dfs(it, ans, vis, adj);
            cnt += x;
            if (x % 2 == 0)
            {
                ans++;
            }
        }
    }
    return cnt;
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
    if (n & 1)
    {
        cout << -1 << endl;
    }
    else
    {
        vector<int> vis(n, 0);
        int ans = 0;
        dfs(0, ans, vis, adj);
        cout << ans << endl;
    }

    return 0;
}