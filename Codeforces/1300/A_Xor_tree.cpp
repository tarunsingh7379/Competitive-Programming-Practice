#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void func(int node, int x, int y, vector<int> &vis, vector<vector<int>> &adj, vector<int> &val,
          vector<int> &req, vector<int> &ans)
{
    vis[node] = 1;
    val[node] ^= x;
    if (val[node] != req[node])
    {
        ans.push_back(node + 1);
        x ^= 1;
    }
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            func(it, y, x, vis, adj, val, req, ans);
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
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> val(n), req(n);
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> req[i];
    }

    vector<int> ans;
    vector<int> vis(n, 0);
    func(0, 0, 0, vis, adj, val, req, ans);
    cout << ans.size() << endl;
    for (auto num : ans)
    {
        cout << num << endl;
    }

    return 0;
}