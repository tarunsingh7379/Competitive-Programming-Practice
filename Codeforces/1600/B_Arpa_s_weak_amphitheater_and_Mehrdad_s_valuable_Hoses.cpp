#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(ll ind, ll k, ll n, vector<ll> &w, vector<ll> &b, vector<ll> &gr_w, vector<ll> &gr_b, vector<vector<ll>> &group, vector<vector<ll>> &dp)
{
    if (ind >= group.size())
    {
        return 0;
    }
    if (dp[ind][k] != -1)
        return dp[ind][k];
    ll ans = 0;
    if (k >= gr_w[ind])
    {
        ans = max(ans, gr_b[ind] + func(ind + 1, k - gr_w[ind], n, w, b, gr_w, gr_b, group, dp));
    }
    for (auto num : group[ind])
    {
        if (k >= w[num])
        {
            ans = max(ans, b[num] + func(ind + 1, k - w[num], n, w, b, gr_w, gr_b, group, dp));
        }
    }
    ans = max(ans, func(ind + 1, k, n, w, b, gr_w, gr_b, group, dp));
    return dp[ind][k] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, W;
    cin >> n >> m >> W;
    vector<ll> w(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<vector<ll>> adj(n);
    for (ll i = 0; i < m; i++)
    {
        ll x, y;
        cin >> x >> y;
        x--;
        y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<ll> vis(n, 0);
    vector<vector<ll>> group;
    for (ll i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            queue<int> q;
            q.push(i);
            vis[i] = 1;
            vector<ll> v;
            v.push_back(i);
            while (!q.empty())
            {
                int x = q.front();
                q.pop();
                for (auto it : adj[x])
                {
                    if (!vis[it])
                    {
                        q.push(it);
                        vis[it] = 1;
                        v.push_back(it);
                    }
                }
            }
            group.push_back(v);
        }
    }
    int sz = group.size();
    vector<ll> gr_w(sz, 0), gr_b(sz, 0);
    for (int i = 0; i < sz; i++)
    {
        ll x = 0, y = 0;
        for (auto num : group[i])
        {
            x += w[num];
            y += b[num];
        }
        gr_w[i] = x;
        gr_b[i] = y;
    }
    vector<vector<ll>> dp(sz, vector<ll>(W + 1, -1));
    cout << func(0, W, group.size(), w, b, gr_w, gr_b, group, dp) << endl;

    return 0;
}