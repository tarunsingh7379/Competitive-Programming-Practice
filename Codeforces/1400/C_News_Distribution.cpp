#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int parent[500005];
int sz[500005];

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
    parent[parv] = paru;
}

void init(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    init(n);
    for (int i = 0; i < m; i++)
    {
        int k;
        cin >> k;
        int last = -1;
        for (int j = 0; j < k; j++)
        {
            int x;
            cin >> x;
            if (last != -1)
            {
                uni(last, x);
            }
            last = x;
        }
    }
    vector<int> freq(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        freq[findParent(i)]++;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << freq[findParent(i)] << " ";
    }
    cout << endl;

    return 0;
}