#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void dfs(int node, int dis, vector<int> &cost, vector<int> &vis, vector<vector<int>> &adj)
{
    vis[node] = 1;
    cost[dis]++;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, dis + 1, cost, vis, adj);
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
    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        x--;
        adj[i + 1].push_back(x);
        adj[x].push_back(i + 1);
    }
    vector<int> vis(n, 0), cost(n, 0);
    dfs(0, 0, cost, vis, adj);
    int ans = 0;
    for (auto num : cost)
    {
        ans += (num % 2);
    }
    cout << ans << endl;

    return 0;
}