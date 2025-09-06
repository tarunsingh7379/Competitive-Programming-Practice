#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> ans(n - 1, -1);
    vector<vector<int>> degree(n);
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        degree[u].push_back(i);
        degree[v].push_back(i);
    }
    int ma = 0, ind = -1;
    for (int i = 0; i < n; i++)
    {
        if (degree[i].size() > ma)
        {
            ma = degree[i].size();
            ind = i;
        }
    }
    int cur = 0;
    if (ma >= 3)
    {
        for (auto num : degree[ind])
        {
            ans[num] = cur;
            cur++;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (ans[i] == -1)
        {
            ans[i] = cur++;
        }
    }
    for (auto num : ans)
    {
        cout << num << endl;
    }

    return 0;
}