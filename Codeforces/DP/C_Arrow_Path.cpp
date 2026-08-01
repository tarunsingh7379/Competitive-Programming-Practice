#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int get_idx(int i, int j, int n)
{
    return (i * n + j);
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
        vector<string> v(2);
        cin >> v[0] >> v[1];
        vector<vector<int>> adj(get_idx(1, n, n) + 1);
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int even = (i + j) % 2 == 0;
                if (even)
                {
                    for (int k = 0; k < 4; k++)
                    {
                        int new_i = i + dx[k];
                        int new_j = j + dy[k];
                        if (new_i >= 0 && new_i < 2 && new_j >= 0 && new_j < n)
                        {
                            adj[get_idx(i, j, n)].push_back(get_idx(new_i, new_j, n));
                        }
                    }
                }
                else
                {
                    int new_i = i;
                    int new_j = j;
                    if (v[i][j] == '<')
                    {
                        new_j--;
                    }
                    else
                    {
                        new_j++;
                    }
                    if (new_i >= 0 && new_i < 2 && new_j >= 0 && new_j < n)
                    {
                        adj[get_idx(i, j, n)].push_back(get_idx(new_i, new_j, n));
                    }
                }
            }
        }
        queue<int> q;
        q.push(0);
        vector<bool> visited(get_idx(1, n, n) + 1, false);
        visited[0] = true;
        while (!q.empty())
        {
            int x = q.front();
            q.pop();
            for (auto it : adj[x])
            {
                if (!visited[it])
                {
                    visited[it] = true;
                    q.push(it);
                }
            }
        }
        cout << (visited[get_idx(1, n - 1, n)] ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}