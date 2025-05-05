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
        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        vector<int> ans(n + 1, -1), f(n + 1, 0), last(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            int x = a[i];
            f[x] = max(f[x], i - last[x]);
            last[x] = i;
        }
        for (int i = 1; i <= n; i++)
        {
            f[i] = max(f[i], n - last[i] + 1);
            for (int j = f[i]; j <= n && ans[j] == -1; j++)
            {
                ans[j] = i;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}