#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void dfs(ll node, vector<ll> &path, vector<ll> &sum_a, vector<ll> &sum_b, vector<ll> &ans, vector<ll> &vis, vector<vector<pair<ll, pair<ll, ll>>>> &adj)
{
    vis[node] = 1;
    path.push_back(sum_b[node]);
    ll pos = upper_bound(path.begin(), path.end(), sum_a[node]) - path.begin();
    pos--;
    ans[node] = pos;
    for (auto it : adj[node])
    {
        ll x = it.first;
        if (!vis[x])
        {
            ll wt_a = it.second.first;
            ll wt_b = it.second.second;
            sum_a[x] = sum_a[x] + sum_a[node] + wt_a;
            sum_b[x] = sum_b[x] + sum_b[node] + wt_b;
            dfs(x, path, sum_a, sum_b, ans, vis, adj);
        }
    }
    path.pop_back();
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
        vector<vector<pair<ll, pair<ll, ll>>>> adj(n + 1);
        for (ll i = 2; i <= n; i++)
        {
            ll p, a, b;
            cin >> p >> a >> b;
            adj[i].push_back({p, {a, b}});
            adj[p].push_back({i, {a, b}});
        }
        vector<ll> sum_a(n + 1, 0), sum_b(n + 1, 0), ans(n + 1, 0), vis(n + 1, 0), path;
        dfs(1, path, sum_a, sum_b, ans, vis, adj);
        for (ll i = 2; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}