#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<vector<int>> adj(n);
    vector<int> indeg(n, 0);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        adj[u].push_back(v);
        indeg[v]++;
    }
    vector<vector<int>> dp(n, vector<int>(26, 0));
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        if (indeg[i] == 0)
        {
            q.push(i);
        }
        dp[i][s[i] - 'a'] = 1;
    }
    int cnt = 0;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cnt++;
        for (int child : adj[node])
        {
            for (int i = 0; i < 26; i++)
            {
                dp[child][i] = max(dp[child][i], dp[node][i] + (s[child] - 'a' == i));
            }
            indeg[child]--;
            if (indeg[child] == 0)
            {
                q.push(child);
            }
        }
    }
    if (cnt != n)
    {
        cout << -1 << endl;
    }
    else
    {
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                ans = max(ans, dp[i][j]);
            }
        }
        cout << ans << endl;
    }

    return 0;
}