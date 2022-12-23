#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll dfs(int node, int &ans, vector<int> &vis, vector<vector<int>> &adj, vector<pair<int, int>> &val)
{
    vis[node] = 1;
    int cnt = 0;
    ll sum = 0;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            sum += dfs(it, ans, vis, adj, val);
            cnt++;
        }
    }
    if (cnt == 0)
    {
        ans++;
        return val[node].second;
    }
    if (sum >= val[node].first)
    {
        sum = min(sum, 1LL * val[node].second);
        return sum;
    }
    ans++;
    return val[node].second;
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
        for (int i = 2; i <= n; i++)
        {
            int p;
            cin >> p;
            adj[i].push_back(p);
            adj[p].push_back(i);
        }
        vector<pair<int, int>> val(n + 1);
        for (int i = 1; i <= n; i++)
        {
            int l, r;
            cin >> l >> r;
            val[i] = {l, r};
        }
        vector<int> vis(n + 1, 0);
        int ans = 0;
        dfs(1, ans, vis, adj, val);
        cout << ans << endl;
        t--;
    }

    return 0;
}