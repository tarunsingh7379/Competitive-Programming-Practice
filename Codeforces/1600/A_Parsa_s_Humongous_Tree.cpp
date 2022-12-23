#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void dfs(ll node, ll par, vector<pair<ll, ll>> &v, vector<vector<ll>> &adj, vector<vector<ll>> &dp)
{
    for (auto it : adj[node])
    {
        if (it != par)
        {
            dfs(it, node, v, adj, dp);
        }
    }
    ll ans1 = 0, ans2 = 0;
    for (auto it : adj[node])
    {
        if (it != par)
        {
            ll x = abs(v[node - 1].first - v[it - 1].first) + dp[it][0];
            ll y = abs(v[node - 1].first - v[it - 1].second) + dp[it][1];
            ans1 += max(x, y);
        }
    }
    for (auto it : adj[node])
    {
        if (it != par)
        {
            ll x = abs(v[node - 1].second - v[it - 1].first) + dp[it][0];
            ll y = abs(v[node - 1].second - v[it - 1].second) + dp[it][1];
            ans2 += max(x, y);
        }
    }
    dp[node][0] = ans1;
    dp[node][1] = ans2;
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
        vector<pair<ll, ll>> v;
        for (ll i = 0; i < n; i++)
        {
            ll l, r;
            cin >> l >> r;
            v.push_back({l, r});
        }
        vector<vector<ll>> adj(n + 1);
        for (ll i = 0; i < n - 1; i++)
        {
            ll x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        vector<vector<ll>> dp(n + 1, vector<ll>(2, 0));

        dfs(1, 0, v, adj, dp);

        cout << max(dp[1][0], dp[1][1]) << endl;
        t--;
    }

    return 0;
}