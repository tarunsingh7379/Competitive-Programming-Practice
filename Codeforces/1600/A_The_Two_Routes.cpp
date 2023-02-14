#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void bfs(int n, vector<vector<int>> &adj, vector<int> &dis)
{
    queue<int> q;
    q.push(1);
    dis[1] = 0;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (auto it : adj[node])
        {

            if (dis[node] + 1 < dis[it])
            {
                dis[it] = dis[node] + 1;
                q.push(it);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    set<pair<int, int>> st;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x > y)
        {
            swap(x, y);
        }
        adj[x].push_back(y);
        adj[y].push_back(x);
        st.insert({x, y});
    }
    vector<int> r_dis(n + 1, 1e9);
    bfs(n, adj, r_dis);
    vector<vector<int>> bus(n + 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if (!st.count({i, j}))
            {
                bus[i].push_back(j);
                bus[j].push_back(i);
            }
        }
    }
    vector<int> b_dis(n + 1, 1e9);
    bfs(n, bus, b_dis);
    if (b_dis[n] == 1e9 || r_dis[n] == 1e9)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << max(b_dis[n], r_dis[n]) << endl;
    }

    return 0;
}