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
        int n, m;
        cin >> n >> m;
        int a[n][m];
        int cnt = 0, ans = 0, mi = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                if (a[i][j] < 0)
                {
                    cnt++;
                }
                ans += abs(a[i][j]);
                mi = min(mi, abs(a[i][j]));
            }
        }
        if (cnt % 2 != 0)
        {
            ans -= 2 * mi;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}