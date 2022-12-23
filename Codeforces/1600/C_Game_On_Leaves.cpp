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
        int n, k;
        cin >> n >> k;
        vector<vector<int>> adj(n + 1);
        for (int i = 0; i < n - 1; i++)
        {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int flag = 0;
        for (int i = 1; i <= n; i++)
        {
            if (adj[i].size() == 1)
            {
                if (i == k)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 1 || n <= 2)
        {
            cout << "Ayush" << endl;
        }
        else
        {
            if (n % 2 != 0)
            {
                cout << "Ashish" << endl;
            }
            else
            {
                cout << "Ayush" << endl;
            }
        }
        t--;
    }

    return 0;
}