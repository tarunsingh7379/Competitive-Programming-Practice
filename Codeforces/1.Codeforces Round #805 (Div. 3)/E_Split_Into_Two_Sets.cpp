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
        vector<ll> adj[n + 1];
        for (ll i = 0; i < n; i++)
        {
            ll a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        ll flag = 1;
        for (ll i = 1; i <= n; i++)
        {
            if (adj[i].size() >= 3)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            ll color[n + 1] = {0};
            ll vis[n + 1] = {0};
            ll flag = 1;
            for (ll i = 1; i <= n; i++)
            {
                if (!vis[i])
                {
                    queue<ll> q;
                    q.push(i);
                    while (!q.empty())
                    {
                        ll node = q.front();
                        q.pop();
                        for (auto it : adj[node])
                        {
                            if (!vis[it])
                            {
                                q.push(it);
                                vis[it] = 1;
                                color[it] = !color[node];
                            }
                            else
                            {
                                if (color[it] == color[node])
                                {
                                    flag = 0;
                                    break;
                                }
                            }
                        }
                        if (flag == 0)
                        {
                            break;
                        }
                    }
                }
                if (flag == 0)
                {
                    break;
                }
            }
            if (flag == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        t--;
    }

    return 0;
}