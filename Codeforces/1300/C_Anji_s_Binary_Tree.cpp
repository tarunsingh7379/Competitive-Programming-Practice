#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int func(int node, string &s, vector<vector<int>> &adj,
         vector<int> &dp)
{
    if (adj[node][0] == -1 && adj[node][1] == -1)
    {
        return 0;
    }
    if (dp[node] != -1)
    {
        return dp[node];
    }
    int ans = 1e7;
    if (s[node] == 'U')
    {
        if (adj[node][0] != -1)
            ans = min(ans, 1 + func(adj[node][0], s, adj, dp));
        if (adj[node][1] != -1)
            ans = min(ans, 1 + func(adj[node][1], s, adj, dp));
    }
    else if (s[node] == 'L')
    {
        if (adj[node][0] != -1)
            ans = min(ans, func(adj[node][0], s, adj, dp));
        if (adj[node][1] != -1)
            ans = min(ans, 1 + func(adj[node][1], s, adj, dp));
    }
    else
    {
        if (adj[node][0] != -1)
            ans = min(ans, 1 + func(adj[node][0], s, adj, dp));
        if (adj[node][1] != -1)
            ans = min(ans, func(adj[node][1], s, adj, dp));
    }
    return dp[node] = ans;
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
        string s;
        cin >> s;
        vector<vector<int>> adj(n);
        for (int i = 0; i < n; i++)
        {
            ll left, right;
            cin >> left >> right;
            left--;
            right--;
            adj[i].push_back(left);
            adj[i].push_back(right);
        }
        vector<int> dp(n, -1);
        cout << func(0, s, adj, dp) << endl;
        t--;
    }

    return 0;
}