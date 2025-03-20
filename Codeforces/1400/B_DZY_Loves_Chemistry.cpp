#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void dfs(ll node, ll &cnt, vector<ll> &vis, vector<vector<ll>> &adj)
{
    vis[node] = 1;
    cnt++;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, cnt, vis, adj);
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
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            ll temp_cnt = 0;
            dfs(i, temp_cnt, vis, adj);
            cnt += (temp_cnt - 1);
        }
    }
    cout << (1LL << cnt) << endl;

    return 0;
}