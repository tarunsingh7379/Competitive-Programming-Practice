#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll dfs(ll node, vector<ll> &leaf, vector<ll> &vis, vector<vector<ll>> &adj)
{
    vis[node] = 1;
    ll cnt = 0;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            leaf[node] += dfs(it, leaf, vis, adj);
            cnt++;
        }
    }
    if (cnt == 0)
    {
        leaf[node]++;
    }
    return leaf[node];
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
        for (ll i = 0; i < n - 1; i++)
        {
            ll x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        vector<ll> vis(n + 1, 0), leaf(n + 1, 0);
        dfs(1, leaf, vis, adj);
        ll q;
        cin >> q;
        while (q)
        {
            ll x, y;
            cin >> x >> y;
            ll ans = leaf[x] * leaf[y];
            cout << ans << endl;
            q--;
        }
        t--;
    }

    return 0;
}