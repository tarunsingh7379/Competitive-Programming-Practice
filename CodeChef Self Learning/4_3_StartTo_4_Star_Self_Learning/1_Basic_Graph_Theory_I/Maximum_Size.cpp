#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll cnt;

void dfs(ll node, vector<vector<ll>> &adj, vector<ll> &vis)
{
    vis[node] = 1;
    cnt++;

    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, adj, vis);
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
        ll n, m;
        cin >> n >> m;
        vector<vector<ll>> adj(n * m + 1);
        vector<ll> isl(n * m + 1, 0);
        vector<string> v;
        for (ll i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }

        ll dx[] = {0, 0, 1, -1};
        ll dy[] = {-1, 1, 0, 0};
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                if (v[i][j] == '1')
                {
                    ll u = i * m + (j + 1);

                    for (ll k = 0; k < 4; k++)
                    {
                        ll x = i + dx[k];
                        ll y = j + dy[k];

                        if (x >= 0 && x < n && y >= 0 && y < m && v[x][y] == '1')
                        {
                            ll node = x * m + (y + 1);
                            if (!isl[node])
                            {
                                adj[u].push_back(node);
                                adj[node].push_back(u);
                            }
                        }
                    }
                    isl[u] = 1;
                }
            }
        }

        vector<ll> cmp;
        vector<ll> vis(n * m + 1, 0);
        for (ll i = 1; i <= n * m; i++)
        {

            if (!vis[i] && isl[i])
            {
                cnt = 0;
                dfs(i, adj, vis);

                cmp.push_back(cnt);
            }
        }
        sort(cmp.begin(), cmp.end());
        reverse(cmp.begin(), cmp.end());
        ll ans = 0;

        for (ll i = 1; i < cmp.size(); i += 2)
        {
            ans += cmp[i];
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}