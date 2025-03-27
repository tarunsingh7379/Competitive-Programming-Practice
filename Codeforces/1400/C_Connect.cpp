#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int parent[100005];
int sz[100005];

int findParent(int node)
{
    if (parent[node] == node)
    {
        return node;
    }
    return parent[node] = findParent(parent[node]);
}

void uni(int u, int v)
{
    int paru = findParent(u);
    int parv = findParent(v);
    if (sz[paru] < sz[parv])
    {
        parent[paru] = parv;
        sz[parv] += sz[paru];
    }
    else
    {
        parent[parv] = paru;
        sz[paru] += sz[parv];
    }
}

void init(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
        sz[i] = 1;
    }
}

int get_index(int i, int j, int n)
{
    return (i - 1) * n + j;
}

void bfs(int x, int y, vector<vector<int>> &vis, vector<string> &grid)
{
    int n = grid.size();
    queue<pair<int, int>> q;
    q.push({x, y});
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};
    vis[x][y] = 1;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int new_x = p.first + dx[i];
            int new_y = p.second + dy[i];
            if (new_x >= 1 && new_x <= n && new_y >= 1 && new_y <= n && grid[new_x - 1][new_y - 1] == '0' && !vis[new_x][new_y])
            {
                vis[new_x][new_y] = 1;
                uni(get_index(p.first, p.second, n), get_index(new_x, new_y, n));
                q.push({new_x, new_y});
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int r1, c1, r2, c2;
    cin >> r1 >> c1;
    cin >> r2 >> c2;

    vector<string> grid;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        grid.push_back(s);
    }

    init(n * n + 1);
    vector<vector<int>> vis(n + 1, vector<int>(n + 1, 0));
    bfs(r1, c1, vis, grid);
    bfs(r2, c2, vis, grid);

    int ans = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (findParent(get_index(i, j, n)) != findParent(get_index(r1, c1, n)))
                continue;
            for (int l = 1; l <= n; l++)
            {
                for (int r = 1; r <= n; r++)
                {
                    if (findParent(get_index(l, r, n)) != findParent(get_index(r2, c2, n)))
                        continue;
                    ans = min(ans, (i - l) * (i - l) + (j - r) * (j - r));
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}