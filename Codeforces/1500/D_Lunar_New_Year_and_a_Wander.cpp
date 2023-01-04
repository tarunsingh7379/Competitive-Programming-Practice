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
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    set<int> st;
    st.insert(1);
    vector<int> ans, vis(n + 1, 0);
    while (!st.empty())
    {
        int x = *st.begin();
        st.erase(st.begin());
        ans.push_back(x);
        vis[x] = 1;
        for (auto it : adj[x])
        {
            if (!vis[it])
            {
                st.insert(it);
            }
        }
    }
    for (auto num : ans)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}