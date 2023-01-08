#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void dfs(int node, vector<int> &vis, vector<vector<int>> &adj)
{
    vis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, vis, adj);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<vector<int>> adj(n + 26);
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (auto c : s)
        {
            adj[c - 'a'].push_back(i + 26);
            adj[i + 26].push_back(c - 'a');
        }
    }
    int cnt = 0;
    vector<int> vis(n + 26, 0);
    for (int i = 0; i < n + 26; i++)
    {
        if (!vis[i] && adj[i].size() > 0)
        {
            cnt++;
            dfs(i, vis, adj);
        }
    }
    cout << cnt << endl;
    return 0;
}