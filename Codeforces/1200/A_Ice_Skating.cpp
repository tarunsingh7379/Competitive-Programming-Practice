#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void dfs(int i, vector<int> &vis, vector<pair<int, int>> &v)
{
    vis[i] = 1;
    for (int j = 0; j < v.size(); j++)
    {
        if (!vis[j])
        {
            if ((v[i].first == v[j].first) || (v[i].second == v[j].second))
            {
                dfs(j, vis, v);
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
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }
    vector<int> vis(n, 0);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i, vis, v);
            ans++;
        }
    }
    ans--;
    cout << ans << endl;
    return 0;
}