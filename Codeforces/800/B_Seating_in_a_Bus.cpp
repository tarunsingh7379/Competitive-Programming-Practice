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
        int n;
        cin >> n;
        vector<int> vis(n + 5, 0);
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        bool ok = true;
        vis[v[0]] = 1;
        for (int i = 1; i < n; i++)
        {
            bool occupied = vis[v[i] - 1] || vis[v[i] + 1];
            if (!occupied)
            {
                ok = false;
                break;
            }
            vis[v[i]] = 1;
        }
        cout << (ok ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}