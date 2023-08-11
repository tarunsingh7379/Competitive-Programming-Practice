#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void dfs(int node, int &ans, int lev, vector<int> &vis, vector<vector<int>> &adj)
{
    vis[node] = 1;
    ans = max(ans, lev);
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, ans, lev + 1, vis, adj);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<vector<int>> adj(n);
    set<int> manager;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        x--;
        if (x >= 0)
        {
            adj[x].push_back(i);
            adj[i].push_back(x);
        }
        else
        {
            manager.insert(i);
        }
    }

    int ans = 0;
    for (auto num : manager)
    {
        vector<int> vis(n, 0);
        dfs(num, ans, 1, vis, adj);
    }

    cout << ans << endl;

    return 0;
}