#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll power(ll base, ll n, ll m)
{
    ll ans = 1;
    base = base % m;
    while (n != 0)
    {
        if (n % 2 == 1)
        {
            n = n - 1;
            ans = (ans * base) % m;
        }
        else
        {
            n = n / 2;
            base = (base * base) % m;
        }
    }
    return ans;
}

ll dfs(ll node, vector<ll> &vis, vector<vector<ll>> &adj)
{
    vis[node] = 1;
    ll cnt = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            cnt += dfs(it, vis, adj);
        }
    }
    return cnt;
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
        ll u, v, c;
        cin >> u >> v >> c;
        u--;
        v--;
        if (c == 0)
        {
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    }
    vector<ll> vis(n, 0);
    ll bad_ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            ll x = dfs(i, vis, adj);
            bad_ans = (bad_ans + power(x, k, M)) % M;
        }
    }
    ll ans = (power(n, k, M) - bad_ans + M) % M;
    cout << ans << endl;

    return 0;
}