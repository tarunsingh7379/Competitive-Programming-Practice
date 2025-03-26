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
        int n, m;
        cin >> n >> m;
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        vector<pair<int, int>> adj[n + 2][m + 2];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                switch (v[i - 1][j - 1])
                {
                case 'U':
                    adj[i - 1][j].push_back({i, j});
                    break;
                case 'D':
                    adj[i + 1][j].push_back({i, j});
                    break;
                case 'L':
                    adj[i][j - 1].push_back({i, j});
                    break;
                case 'R':
                    adj[i][j + 1].push_back({i, j});
                    break;
                }
            }
        }

        queue<pair<int, int>> q;
        vector<vector<int>> vis(n + 2, vector<int>(m + 2, 0));
        for (int j = 0; j <= m + 1; j++)
        {
            q.push({0, j});
            vis[0][j] = 1;
        }
        for (int i = 0; i <= n + 1; i++)
        {
            q.push({i, 0});
            vis[i][0] = 1;
        }
        for (int j = 0; j <= m + 1; j++)
        {
            q.push({n + 1, j});
            vis[n + 1][j] = 1;
        }
        for (int i = 0; i <= n + 1; i++)
        {
            q.push({i, m + 1});
            vis[i][m + 1] = 1;
        }
        while (!q.empty())
        {
            pair<int, int> p = q.front();
            q.pop();
            for (auto it : adj[p.first][p.second])
            {
                if (!vis[it.first][it.second])
                {
                    vis[it.first][it.second] = 1;
                    q.push({it.first, it.second});
                }
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (vis[i - 1][j] && vis[i + 1][j] && vis[i][j - 1] && vis[i][j + 1])
                {
                    if (v[i - 1][j - 1] == '?')
                    {
                        vis[i][j] = 1;
                    }
                }
            }
        }
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cnt += vis[i][j];
            }
        }
        cout << n * m - cnt << endl;

        t--;
    }

    return 0;
}