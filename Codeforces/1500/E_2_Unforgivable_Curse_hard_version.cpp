#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void dfs(int node, vector<int> &temp, vector<int> &vis, vector<vector<int>> &adj)
{
    vis[node] = 1;
    temp.push_back(node);
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, temp, vis, adj);
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
        int n, k;
        cin >> n >> k;
        string a;
        cin >> a;
        string b;
        cin >> b;
        vector<vector<int>> adj(n);
        for (int i = 0; i < n; i++)
        {
            if (i + k < n)
            {
                adj[i].push_back(i + k);
                adj[i + k].push_back(i);
            }
            if (i + k + 1 < n)
            {
                adj[i].push_back(i + k + 1);
                adj[i + k + 1].push_back(i);
            }
        }
        vector<int> vis(n, 0);
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                vector<int> temp;
                dfs(i, temp, vis, adj);
                multiset<char> x, y;
                for (auto num : temp)
                {
                    x.insert(a[num]);
                    y.insert(b[num]);
                }
                if (x != y)
                {
                    ok = false;
                    break;
                }
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}