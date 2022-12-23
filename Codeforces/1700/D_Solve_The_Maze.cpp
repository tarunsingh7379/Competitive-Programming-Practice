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

        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};

        auto isValid = [&](int x, int y) -> bool
        {
            return (x >= 0 && x < n && y >= 0 && y < m);
        };

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (v[i][j] == 'B')
                {
                    for (int k = 0; k < 4; k++)
                    {
                        int x = i + dx[k];
                        int y = j + dy[k];
                        if (isValid(x, y))
                        {
                            if (v[x][y] == '.')
                            {
                                v[x][y] = '#';
                            }
                        }
                    }
                }
            }
        }

        queue<pair<int, int>> q;
        if (v[n - 1][m - 1] == '.')
        {
            q.push({n - 1, m - 1});
        }
        vector<vector<int>> vis(n, vector<int>(m, 0));
        while (!q.empty())
        {
            auto pos = q.front();
            q.pop();
            int x = pos.first;
            int y = pos.second;
            for (int k = 0; k < 4; k++)
            {
                int nx = x + dx[k];
                int ny = y + dy[k];
                if (isValid(nx, ny) && !vis[nx][ny] && v[nx][ny] != '#')
                {
                    q.push({nx, ny});
                    vis[nx][ny] = 1;
                }
            }
        }
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (v[i][j] == 'G' && !vis[i][j])
                {
                    flag = 0;
                    break;
                }

                if (v[i][j] == 'B' && vis[i][j])
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 0)
            {
                break;
            }
        }
        cout << (flag ? "Yes" : "No") << endl;
        t--;
    }

    return 0;
}