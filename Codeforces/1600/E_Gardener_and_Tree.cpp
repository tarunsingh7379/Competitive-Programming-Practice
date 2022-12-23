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
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> adj[n + 1];
        for (ll i = 0; i < n - 1; i++)
        {
            ll u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        vector<ll> deg(n + 1, 0);
        queue<ll> q;
        for (ll i = 1; i <= n; i++)
        {
            if (adj[i].size() == 1)
            {
                q.push(i);
            }
            deg[i] = adj[i].size();
        }
        ll cnt = 0;
        ll level[n + 1] = {0};
        ll i = 1;
        while (!q.empty())
        {
            cnt = 0;
            queue<ll> p;
            while (!q.empty())
            {
                ll ele = q.front();
                q.pop();
                cnt++;
                for (auto it : adj[ele])
                {
                    deg[it]--;
                    if (deg[it] == 1)
                    {
                        p.push(it);
                    }
                }
            }
            q = p;
            level[i] = cnt;
            i++;
        }
        ll sum = 0;
        for (ll i = 1; i <= min(n, k); i++)
        {
            sum += level[i];
        }
        ll ans = n - sum;
        cout << ans << endl;
    }

    return 0;
}