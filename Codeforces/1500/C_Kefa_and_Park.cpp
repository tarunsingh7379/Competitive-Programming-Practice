#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void dfs(int node, int cats, int &ans, int m, vector<int> &a, vector<int> &vis, vector<vector<int>> &adj)
{
    vis[node] = 1;
    int total = cats;
    if (a[node] == 1)
    {
        total++;
    }
    else
    {
        total = 0;
    }
    if (total > m)
    {
        return;
    }
    int cnt = 0;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            cnt++;
            dfs(it, total, ans, m, a, vis, adj);
        }
    }
    if (cnt == 0 && total <= m)
    {
        ans++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<vector<int>> adj(n);
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    vector<int> vis(n, 0);
    int ans = 0;
    dfs(0, 0, ans, m, a, vis, adj);
    cout << ans << endl;
    return 0;
}