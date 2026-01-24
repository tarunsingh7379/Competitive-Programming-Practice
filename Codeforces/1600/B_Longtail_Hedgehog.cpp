#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> adj(n + 1);
    vector<ll> deg(n + 1, 0);
    for (ll i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;
        if (u < v)
        {
            adj[u].push_back(v);
        }
        else
        {
            adj[v].push_back(u);
        }
        deg[u]++;
        deg[v]++;
    }
    vector<ll> dp(n + 1, 1);
    for (ll i = 1; i <= n; i++)
    {
        for (auto it : adj[i])
        {
            dp[it] = max(dp[it], dp[i] + 1);
        }
    }
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        ans = max(ans, dp[i] * deg[i]);
    }
    cout << ans << endl;

    return 0;
}