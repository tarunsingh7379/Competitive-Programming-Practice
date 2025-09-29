#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void dfs(int ind, int n, vector<int> &vis, vector<int> &a, vector<int> &b)
{
    vis[ind] = 1;
    for (int node = 0; node < n; node++)
    {
        if (!vis[node])
        {
            if ((a[node] < a[ind] && a[ind] < b[node]) || (a[node] < b[ind] && b[ind] < b[node]))
                dfs(node, n, vis, a, b);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int type, x, y;
    vector<int> a(n, 0), b(n, 0);
    int ind = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> type >> x >> y;
        if (type == 1)
        {
            a[ind] = x;
            b[ind] = y;
            ind++;
        }
        else
        {
            x--;
            y--;
            vector<int> vis(n, 0);
            dfs(x, n, vis, a, b);
            if (vis[y])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}