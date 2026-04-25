#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void dfs(ll node, ll &ans, ll k, vector<ll> &vis, vector<vector<ll>> &adj, vector<vector<ll>> &dp)
{
    vis[node] = 1;
    dp[node][0] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, ans, k, vis, adj, dp);
            for (ll i = 0; i < k; i++)
            {
                ans += dp[node][i] * dp[it][k - i - 1];
            }
            for (ll i = 0; i < k; i++)
            {
                dp[node][i + 1] += dp[it][i];
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<vector<ll>> adj(n);
    for (ll i = 0; i < n - 1; i++)
    {
        ll u, v;
        cin >> u >> v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<vector<ll>> dp(n, vector<ll>(k + 1, 0));
    vector<ll> vis(n, 0);
    ll ans = 0;
    dfs(0, ans, k, vis, adj, dp);
    cout << ans << endl;

    return 0;
}