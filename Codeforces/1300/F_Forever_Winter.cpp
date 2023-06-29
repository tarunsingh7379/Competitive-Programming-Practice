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
        vector<int> adj[n + 1];
        for (int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        map<int, int> mp;
        for (int i = 1; i <= n; i++)
        {
            mp[adj[i].size()]++;
        }
        int x = -1;
        for (auto num : mp)
        {
            if (num.second == 1)
            {
                x = num.first;
                break;
            }
        }
        if (x != -1)
        {
            cout << x << " " << mp[1] / x << endl;
        }
        else
        {
            vector<pair<int, int>> v;
            for (auto num : mp)
            {
                v.push_back({num.first, num.second});
            }
            if (v[0].second < v[1].second)
            {
                cout << v[0].first << " " << mp[1] / v[0].first << endl;
            }
            else
            {
                cout << v[1].first << " " << mp[1] / v[1].first << endl;
            }
        }

        t--;
    }

    return 0;
}