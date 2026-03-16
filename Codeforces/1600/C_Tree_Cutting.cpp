#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int dfs(int node, int &cnt, int x, vector<int> &vis, vector<vector<int>> &adj)
{
    vis[node] = 1;
    int sz = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            sz += dfs(it, cnt, x, vis, adj);
        }
    }
    if (sz >= x)
    {
        cnt++;
        return 0;
    }
    return sz;
}

bool check(int sz, int k, vector<vector<int>> &adj)
{
    int cnt = 0;
    int n = adj.size();
    vector<int> vis(n, 0);
    dfs(0, cnt, sz, vis, adj);
    return cnt >= (k + 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        int n, k;
        cin >> n >> k;
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
        int ans = 0, l = 0, r = n;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (check(mid, k, adj))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}