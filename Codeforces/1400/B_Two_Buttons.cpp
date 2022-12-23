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

    if (n == m)
    {
        cout << 0 << endl;
    }
    else if (n > m)
    {
        cout << (n - m) << endl;
    }
    else
    {
        int ans = INT_MAX;
        queue<pair<int, int>> q;
        q.push({n, 0});
        vector<int> vis(2 * m + 1, 0);
        vis[n] = 1;
        while (!q.empty())
        {
            auto x = q.front();
            q.pop();
            int node = x.first;
            int cost = x.second;
            if (node == m)
            {
                ans = cost;
                break;
            }
            if (node * 2 <= 2 * m)
            {
                if (!vis[node * 2])
                {
                    q.push({node * 2, cost + 1});
                    vis[node * 2] = 1;
                }
            }
            if (node - 1 > 0)
            {
                if (!vis[node - 1])
                {
                    q.push({node - 1, cost + 1});
                    vis[node - 1] = 1;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}