#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

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
        vector<ll> indeg(n + 1, 0);
        for (ll i = 1; i <= n; i++)
        {
            ll k;
            cin >> k;
            for (ll j = 0; j < k; j++)
            {
                ll x;
                cin >> x;
                adj[x].push_back(i);
                indeg[i]++;
            }
        }
        vector<ll> dp(n + 1, 1);
        queue<ll> q;
        for (ll i = 1; i <= n; i++)
        {
            if (indeg[i] == 0)
            {
                q.push(i);
            }
        }
        ll processed = 0, ans = 0;
        while (!q.empty())
        {
            ll u = q.front();
            q.pop();
            processed++;
            for (auto v : adj[u])
            {
                if (u < v)
                {
                    dp[v] = max(dp[v], dp[u]);
                }
                else
                {
                    dp[v] = max(dp[v], dp[u] + 1);
                }
                indeg[v]--;
                if (indeg[v] == 0)
                {
                    q.push(v);
                }
            }
            ans = max(ans, dp[u]);
        }
        if (processed != n)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
        t--;
    }

    return 0;
}