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
        int n;
        cin >> n;
        int a[n];
        vector<vector<int>> adj(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            adj[i + 1].push_back(a[i]);
            adj[a[i]].push_back(i + 1);
        }
        vector<int> vis(n + 1, 0);
        int cycle = 0, chain = 0;
        for (int i = 1; i <= n; i++)
        {
            if (!vis[i])
            {
                queue<int> q;
                q.push(i);
                vis[i] = 1;
                vector<int> comp;
                while (!q.empty())
                {
                    int x = q.front();
                    q.pop();
                    comp.push_back(x);
                    for (auto it : adj[x])
                    {
                        if (!vis[it])
                        {
                            vis[it] = 1;
                            q.push(it);
                        }
                    }
                }
                bool c = true;
                for (auto x : comp)
                {
                    if (adj[x].size() != 2)
                    {
                        c = false;
                        break;
                    }
                }
                if (c)
                {
                    if (comp.size() >= 3)
                    {
                        cycle++;
                    }
                    else
                    {
                        chain++;
                    }
                }
                else
                {
                    chain++;
                }
            }
        }
        cout << cycle + (chain ? 1 : 0) << " " << cycle + chain << endl;
        t--;
    }

    return 0;
}