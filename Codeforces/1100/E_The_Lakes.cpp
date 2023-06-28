#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void dfs(int i, int j, int &ans, vector<vector<int>> &vis, vector<vector<int>> &a)
{
    vis[i][j] = 1;
    ans += a[i][j];
    for (int k = 0; k < 4; k++)
    {
        int x = i + dx[k];
        int y = j + dy[k];
        if (x >= 0 && y >= 0 && x < a.size() && y < a[0].size() && !vis[x][y] && a[x][y] > 0)
        {
            dfs(x, y, ans, vis, a);
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
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && a[i][j] > 0)
                {
                    int temp = 0;
                    dfs(i, j, temp, vis, a);
                    ans = max(ans, temp);
                }
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}