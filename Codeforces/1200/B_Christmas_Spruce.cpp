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
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        adj[i + 2].push_back(x);
        adj[x].push_back(i + 2);
    }

    int flag = 1;
    for (int i = 1; i <= n; i++)
    {
        if (adj[i].size() == 1)
        {
            continue;
        }
        if (adj[i].size() <= 3 && i != 1)
        {
            flag = 0;
            break;
        }
        if (i == 1 && adj[i].size() < 3)
        {
            flag = 0;
            break;
        }
        int cnt = 0;
        for (auto x : adj[i])
        {
            if (adj[x].size() == 1)
            {
                cnt++;
            }
        }
        if (cnt < 3)
        {
            flag = 0;
            break;
        }
    }
    cout << (flag ? "Yes" : "No") << endl;

    return 0;
}