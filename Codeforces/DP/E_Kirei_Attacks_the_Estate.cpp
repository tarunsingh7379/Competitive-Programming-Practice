#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void dfs(ll node, ll parent, vector<ll> &ma, vector<ll> &mi, vector<ll> &a, vector<vector<ll>> &adj)
{
    ma[node] = max(a[node], a[node] - mi[parent]);
    mi[node] = min(a[node], a[node] - ma[parent]);
    for (auto it : adj[node])
    {
        if (it != parent)
        {
            dfs(it, node, ma, mi, a, adj);
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
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
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
        vector<ll> ma(n, 0), mi(n, 0);
        dfs(0, 0, ma, mi, a, adj);
        for (auto num : ma)
        {
            cout << num << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}