#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void dfs(int node, vector<int> &cmp, vector<int> &vis, vector<vector<int>> &adj)
{
    vis[node] = 1;
    cmp.push_back(node);
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, cmp, vis, adj);
        }
    }
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
        string s;
        cin >> s;
        vector<int> p(n);
        vector<vector<int>> adj(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
            p[i]--;
            adj[i].push_back(p[i]);
            adj[p[i]].push_back(i);
        }
        vector<int> vis(n, 0);
        ll ans = 1;
        for (ll i = 0; i < n; i++)
        {
            if (!vis[i])
            {
                vector<int> cmp;
                dfs(i, cmp, vis, adj);
                string x;
                for (auto num : cmp)
                {
                    x.push_back(s[num]);
                }
                string temp = x;
                ll cnt = 0;
                do
                {
                    rotate(temp.begin(), temp.begin() + 1, temp.end());
                    cnt++;
                } while (temp != x);
                ans = (ans * cnt) / __gcd(ans, cnt);
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}