#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void dfs(ll node, ll par, vector<ll> &dp, vector<vector<ll>> &adj, vector<ll> &sz)
{
    ll size = 0;
    ll sum = 0;
    for (auto it : adj[node])
    {
        if (it != par)
        {
            dfs(it, node, dp, adj, sz);
            sum += dp[it];
            size += sz[it];
        }
    }
    sz[node] = 1 + size;
    for (auto it : adj[node])
    {
        if (it != par)
        {
            dp[node] = max(dp[node], sz[it] - 1 + sum - dp[it]);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n;
        cin >> n;
        vector<vector<ll>> adj(n + 1);
        for (ll i = 0; i < (n - 1); i++)
        {
            ll u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<ll> vis(n + 1, 0);
        vector<ll> sz(n + 1, 0);
        vector<ll> dp(n + 1, 0);
        dfs(1, 0, dp, adj, sz);
        cout << dp[1] << endl;
        t--;
    }

    return 0;
}