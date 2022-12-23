#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void dfs(int node, int par, int w, vector<vector<int>> &adj, vector<int> &ans, map<pair<int, int>, int> &pos)
{
    for (auto it : adj[node])
    {
        if (it != par)
        {
            if (it > node)
            {
                ans[pos[{node, it}]] = w;
            }
            else
            {
                ans[pos[{it, node}]] = w;
            }

            if (w == 2)
            {
                w = 3;
            }
            else
            {
                w = 2;
            }
            dfs(it, node, w, adj, ans, pos);
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
        int n;
        cin >> n;
        vector<vector<int>> adj(n + 1);
        map<pair<int, int>, int> pos;
        for (int i = 0; i < (n - 1); i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            if (u > v)
            {
                swap(u, v);
            }
            pos[{u, v}] = i;
        }
        int flag = 1;
        for (int i = 1; i <= n; i++)
        {
            if (adj[i].size() > 2)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            int s = -1;
            for (int i = 1; i <= n; i++)
            {
                if (adj[i].size() == 1)
                {
                    s = i;
                    break;
                }
            }
            vector<int> ans(n - 1, 0);
            dfs(s, 0, 2, adj, ans, pos);
            for (int i = 0; i < (n - 1); i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        t--;
    }

    return 0;
}