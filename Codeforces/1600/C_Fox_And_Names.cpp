#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check_cycle(int node, vector<int> &pathVis, vector<int> &vis, vector<vector<int>> &adj)
{
    vis[node] = 1;
    pathVis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            if (check_cycle(it, pathVis, vis, adj))
            {
                return true;
            }
        }
        else if (pathVis[it])
        {
            return true;
        }
    }
    pathVis[node] = 0;
    return false;
}

void dfs(int node, stack<int> &st, vector<int> &vis, vector<vector<int>> &adj)
{
    vis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, st, vis, adj);
        }
    }
    st.push(node);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    vector<vector<int>> adj(26);
    int flag = 1;
    for (int i = 0; i < n - 1; i++)
    {
        int n1 = v[i].size(), n2 = v[i + 1].size();
        int j1 = 0, j2 = 0;
        while (j1 < n1 && j2 < n2 && (v[i][j1] == v[i + 1][j2]))
        {
            j1++;
            j2++;
        }
        if (j1 < n1 && j2 < n2)
        {
            adj[v[i][j1] - 'a'].push_back(v[i + 1][j2] - 'a');
        }
        else
        {
            if (j2 == n2)
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 0)
    {
        cout << "Impossible" << endl;
        return 0;
    }

    vector<int> vis(26, 0), pathVis(26, 0);
    for (int i = 0; i < 26; i++)
    {
        if (!vis[i])
        {
            if (check_cycle(i, pathVis, vis, adj))
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 0)
    {
        cout << "Impossible" << endl;
        return 0;
    }

    stack<int> st;
    vector<int> vis1(26, 0);
    for (int i = 0; i < 26; i++)
    {
        if (!vis1[i])
        {
            dfs(i, st, vis1, adj);
        }
    }

    while (!st.empty())
    {
        char c = st.top() + 'a';
        cout << c;
        st.pop();
    }
    cout << endl;
    return 0;
}