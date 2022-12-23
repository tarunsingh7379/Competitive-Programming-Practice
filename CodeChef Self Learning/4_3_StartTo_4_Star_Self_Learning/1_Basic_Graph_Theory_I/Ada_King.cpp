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
    vector<vector<ll>> adj(8 * 8 + 1);
    vector<ll> vis(8 * 8 + 1, 0);
    ll dx[] = {0, 0, -1, 1, -1, -1, 1, 1};
    ll dy[] = {-1, 1, 0, 0, -1, 1, -1, 1};
    for (ll i = 1; i <= 8; i++)
    {
        for (ll j = 1; j <= 8; j++)
        {
            ll u = (i - 1) * 8 + j;
            for (ll k = 0; k < 8; k++)
            {
                ll x = i + dx[k];
                ll y = j + dy[k];
                if (x >= 1 && x <= 8 && y >= 1 && y <= 8)
                {
                    ll node = (x - 1) * 8 + y;
                    if (!vis[node])
                    {
                        adj[u].push_back(node);
                        adj[node].push_back(u);
                    }
                }
            }
            vis[u] = 1;
        }
    }
    while (t)
    {
        ll r, c, k;
        cin >> r >> c >> k;
        vector<ll> v(8 * 8 + 1, 0);
        queue<pair<ll, ll>> q;
        q.push({(r - 1) * 8 + c, 0});
        v[(r - 1) * 8 + c] = 1;
        ll ans = 0;
        while (!q.empty())
        {
            ll node = q.front().first;
            ll level = q.front().second;
            ans++;
            q.pop();
            if (level == k)
            {
                continue;
            }
            for (auto it : adj[node])
            {
                if (!v[it])
                {
                    q.push({it, level + 1});
                    v[it] = 1;
                }
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}