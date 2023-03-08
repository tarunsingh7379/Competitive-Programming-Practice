#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void dfs(int node, vector<int> &cmp, vector<int> &vis, vector<vector<int>> &adj)
{
    vis[node] = 1;
    cmp.push_back(node);
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, cmp, vis, adj);
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
        int n, m;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int b[m];
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            b[i]--;
        }

        vector<vector<int>> adj(n);
        for (int i = 0; i < m; i++)
        {
            adj[b[i]].push_back(b[i] + 1);
            adj[b[i] + 1].push_back(b[i]);
        }

        vector<int> vis(n, 0);

        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                vector<int> cmp;
                dfs(i, cmp, vis, adj);
                vector<int> v;
                for (auto num : cmp)
                {
                    v.push_back(a[num]);
                }
                sort(v.begin(), v.end());
                for (int j = 0; j < cmp.size(); j++)
                {
                    a[cmp[j]] = v[j];
                }
            }
        }

        if (is_sorted(a, a + n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        t--;
    }

    return 0;
}