#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

class dsu
{
    int parent[1005];
    int sz[1005];

public:
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
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m1, m2;
    cin >> n >> m1 >> m2;
    dsu d1, d2;
    d1.init(n + 1);
    d2.init(n + 1);
    for (int i = 0; i < m1; i++)
    {
        int u, v;
        cin >> u >> v;
        d1.uni(u, v);
    }
    for (int i = 0; i < m2; i++)
    {
        int u, v;
        cin >> u >> v;
        d2.uni(u, v);
    }
    vector<pair<int, int>> ans;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((d1.findParent(i) != d1.findParent(j)) && (d2.findParent(i) != d2.findParent(j)))
            {
                ans.push_back({i, j});
                d1.uni(i, j);
                d2.uni(i, j);
            }
        }
    }
    cout << ans.size() << endl;
    for (auto num : ans)
    {
        cout << num.first << " " << num.second << endl;
    }

    return 0;
}