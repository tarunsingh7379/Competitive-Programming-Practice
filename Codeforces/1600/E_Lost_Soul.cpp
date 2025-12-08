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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        if (a[n - 1] == b[n - 1])
        {
            cout << n << endl;
        }
        else
        {
            int ans = 0;
            vector<int> vis(n + 1, 0);
            for (int i = n - 2; i >= 0; i--)
            {
                if (a[i] == b[i] || a[i] == a[i + 1] || b[i] == b[i + 1] || vis[a[i]] || vis[b[i]])
                {
                    ans = i + 1;
                    break;
                }
                vis[a[i + 1]] = 1;
                vis[b[i + 1]] = 1;
            }
            cout << ans << endl;
        }
        t--;
    }

    return 0;
}