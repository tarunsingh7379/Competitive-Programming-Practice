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
    vector<vector<int>> adj(n, vector<int>(n, 0));
    vector<int> deg(n, 0);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        adj[u][v] = 1;
        adj[v][u] = 1;
        adj[u][v] = 1;
        deg[u]++;
        deg[v]++;
    }
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (adj[i][j])
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (adj[i][k] && adj[j][k])
                    {
                        ans = min(ans, deg[i] + deg[j] + deg[k]);
                    }
                }
            }
        }
    }
    if (ans == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans - 6 << endl;
    }

    return 0;
}