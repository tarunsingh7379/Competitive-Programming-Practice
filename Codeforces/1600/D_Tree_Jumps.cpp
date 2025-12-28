#include <bits/stdc++.h>
typedef long long int ll;
#define M 998244353
using namespace std;

/*
                 1
                / \
               2   5
              / \   \
             3    4   7
             \    / \
              8   9  6
[1]
[1,2], [1,5]
[1,2,7], [1,5,3], [1,5,4]
[1,2,7,6], [1,2,7,8], [1,2,7,9], [1,5,3,6], [1,5,3,9], [1,5,4,8]
*/

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
        vector<vector<ll>> adj(n);
        vector<ll> parent(n, -1);
        for (ll i = 1; i <= n - 1; i++)
        {
            ll x;
            cin >> x;
            x--;
            adj[i].push_back(x);
            adj[x].push_back(i);
            parent[i] = x;
        }
        vector<vector<ll>> level(n);
        queue<pair<ll, ll>> q;
        q.push({0, 0});
        vector<bool> vis(n, false);
        vis[0] = true;
        ll maxlevel = 0;
        while (!q.empty())
        {
            ll node = q.front().first;
            ll lev = q.front().second;
            level[lev].push_back(node);
            maxlevel = max(maxlevel, lev);
            q.pop();
            for (auto it : adj[node])
            {
                if (!vis[it])
                {
                    vis[it] = true;
                    q.push({it, lev + 1});
                }
            }
        }
        ll ans = 1;
        vector<ll> dp(n, 0), sum_dp(n, 0);
        dp[0] = 1;
        sum_dp[0] = 1;
        for (ll i = 1; i <= maxlevel; i++)
        {
            for (auto node : level[i])
            {
                dp[node] = (sum_dp[i - 1] - (i != 1 ? dp[parent[node]] : 0) + M) % M;
                sum_dp[i] = (sum_dp[i] + dp[node]) % M;
                ans = (ans + dp[node]) % M;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}