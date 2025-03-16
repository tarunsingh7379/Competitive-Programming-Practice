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
    vector<pair<int, int>> temp;
    vector<int> vals;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vals.push_back(x);
        temp.push_back({x, i});
    }
    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());
    vector<vector<int>> adj(n);
    set<int> st;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
        st.insert(u);
        st.insert(v);
    }
    int ans = 0;
    for (auto num : temp)
    {
        int val = num.first, node = num.second;
        for (auto it : adj[node])
        {
            if (st.count(it))
            {
                ans += vals[it];
            }
        }
        st.erase(node);
    }
    cout << ans << endl;

    return 0;
}