#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void dfs(int node, vector<int> &vis, vector<vector<int>> &adj, vector<int> &comp)
{
    vis[node] = 1;
    comp.push_back(node);
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, vis, adj, comp);
        }
    }
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
    vector<int> vis(n + 1, 0);
    int flag = 1;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            vector<int> comp;
            dfs(i, vis, adj, comp);
            int sz = comp.size();
            for (auto num : comp)
            {
                if (adj[num].size() != sz - 1)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 0)
            {
                break;
            }
        }
    }
    cout << (flag ? "YES" : "NO") << endl;

    return 0;
}