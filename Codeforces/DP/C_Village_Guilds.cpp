#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void dfs(int node, vector<int> &ans, vector<int> &depth, vector<int> &dp, vector<vector<int>> &adj)
{
    dp[node] = depth[node];
    int sum = 0, largest = 0, second_largest = 0;
    for (auto it : adj[node])
    {
        dfs(it, ans, depth, dp, adj);

        sum += ans[it];
        dp[node] = max(dp[node], dp[it]);
        int d = dp[it] - depth[node];
        if (d > largest)
        {
            second_largest = largest;
            largest = d;
        }
        else if (d > second_largest)
        {
            second_largest = d;
        }
    }
    ans[node] = 1 + sum + second_largest;
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
        vector<int> depth(n + 1, 0);
        vector<vector<int>> adj(n + 1);
        for (int i = 2; i <= n; i++)
        {
            int x;
            cin >> x;
            depth[i] = depth[x] + 1;
            adj[x].push_back(i);
        }
        vector<int> dp(n + 1, 0), ans(n + 1, 0);
        dfs(1, ans, depth, dp, adj);
        cout << ans[1] << endl;
        t--;
    }

    return 0;
}