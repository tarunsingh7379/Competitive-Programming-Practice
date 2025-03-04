#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void dfs(int node, int par_index, int &ans, int cost, vector<vector<pair<int, int>>> &adj)
{
    ans = max(ans, cost);
    for (auto it : adj[node])
    {
        if (it.second != par_index)
        {
            dfs(it.first, it.second, ans, cost + (it.second < par_index), adj);
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
        vector<vector<pair<int, int>>> adj(n + 1);
        for (int i = 1; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            adj[x].push_back({y, i});
            adj[y].push_back({x, i});
        }
        int ans = 0;
        dfs(1, 0, ans, 1, adj);
        cout << ans << endl;
        t--;
    }

    return 0;
}