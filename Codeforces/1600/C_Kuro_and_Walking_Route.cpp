#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void dfs(int node, int p, vector<int> &par, vector<int> &sub, vector<vector<int>> &adj)
{
    par[node] = p;
    sub[node] = 1;
    for (auto it : adj[node])
    {
        if (it != p)
        {
            dfs(it, node, par, sub, adj);
            sub[node] += sub[it];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x, y;
    cin >> n >> x >> y;
    x--;
    y--;
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
    vector<int> par(n, -1), sub(n, 0);
    dfs(y, -1, par, sub, adj);

    int z = x;
    while (par[z] != y)
    {
        z = par[z];
    }
    ll total = 1LL * n * (n - 1);
    ll bad = 1LL * sub[x] * (n - sub[z]);
    ll ans = total - bad;
    cout << ans << endl;

    return 0;
}