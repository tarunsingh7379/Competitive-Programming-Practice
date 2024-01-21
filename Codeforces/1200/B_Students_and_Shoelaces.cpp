#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;
int deg[101];
int adj[101][101];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        deg[x]++;
        deg[y]++;
        adj[x][y] = 1;
        adj[y][x] = 1;
    }
    int ans = 0;
    while (1)
    {
        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            if (deg[i] == 1)
            {
                deg[i]--;
                v.push_back(i);
            }
        }
        for (auto num : v)
        {
            for (int j = 1; j <= n; j++)
            {
                if (adj[num][j])
                {
                    deg[j]--;
                }
            }
        }
        if (v.size() == 0)
        {
            break;
        }
        ans++;
    }
    cout << ans << endl;

    return 0;
}