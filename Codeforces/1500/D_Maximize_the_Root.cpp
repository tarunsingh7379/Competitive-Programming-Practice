#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool dfs(ll node, ll k, vector<ll> &vis, vector<ll> &val, vector<vector<ll>> &adj)
{
    if (k > 1e10)
    {
        return false;
    }
    vis[node] = 1;
    ll ok = true, cnt = 0;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            if (val[node] < k && node != 0)
            {
                ok &= dfs(it, k + (k - val[node]), vis, val, adj);
            }
            else
            {
                ok &= dfs(it, k, vis, val, adj);
            }
            cnt++;
        }
    }
    if (cnt == 0)
    {
        ok &= (val[node] >= k);
    }
    return ok;
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
        for (ll i = 1; i < n; i++)
        {
            ll x;
            cin >> x;
            x--;
            adj[i].push_back(x);
            adj[x].push_back(i);
        }
        ll l = 0, r = 1e12;
        ll ans = 0;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            vector<ll> vis(n, 0);
            if (dfs(0, mid, vis, a, adj))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << a[0] + ans << endl;
        t--;
    }

    return 0;
}