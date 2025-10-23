#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void dfs(ll node, vector<ll> &vis, vector<ll> &path, vector<vector<ll>> &adj)
{
    vis[node] = 1;
    path.push_back(node + 1);
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, vis, path, adj);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> adj(n);
    for (ll i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<ll> vis(n, 0);
    vector<vector<ll>> sz[50];
    for (ll i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            vector<ll> path;
            dfs(i, vis, path, adj);
            sz[path.size()].push_back(path);
        }
    }

    bool ok = true;
    for (ll i = 4; i < 50; i++)
    {
        if (sz[i].size() > 0)
        {
            ok = false;
            break;
        }
    }
    if (sz[2].size() > sz[1].size())
    {
        ok = false;
    }
    ll d = sz[1].size() - sz[2].size();
    if (d % 3 != 0)
    {
        ok = false;
    }
    if (!ok)
    {
        cout << -1 << endl;
    }
    else
    {
        for (auto num : sz[3])
        {
            for (auto x : num)
            {
                cout << x << " ";
            }
            cout << endl;
        }
        for (ll i = 0; i < sz[2].size(); i++)
        {
            cout << sz[2][i][0] << " " << sz[2][i][1] << " " << sz[1][i][0] << endl;
        }
        for (ll i = sz[2].size(); i < sz[1].size(); i += 3)
        {
            cout << sz[1][i][0] << " " << sz[1][i + 1][0] << " " << sz[1][i + 2][0] << endl;
        }
    }

    return 0;
}