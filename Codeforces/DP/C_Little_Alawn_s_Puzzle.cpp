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

void dfs(ll node, vector<ll> &vis, vector<vector<ll>> &adj)
{
    vis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, vis, adj);
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
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll b[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        vector<vector<ll>> adj(n + 1);
        for (ll i = 0; i < n; i++)
        {
            adj[a[i]].push_back(b[i]);
            adj[b[i]].push_back(a[i]);
        }
        vector<ll> vis(n + 1, 0);
        ll cnt = 0;
        for (ll i = 1; i <= n; i++)
        {
            if (!vis[i])
            {
                dfs(i, vis, adj);
                cnt++;
            }
        }
        cout << power(2, cnt, M) << endl;
        t--;
    }

    return 0;
}