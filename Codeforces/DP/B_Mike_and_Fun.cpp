#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, q;
    cin >> n >> m >> q;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    vector<int> ans(n, 0);
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < m; j++)
        {
            if (a[i][j])
            {
                cnt++;
            }
            else
            {
                cnt = 0;
            }
            ans[i] = max(ans[i], cnt);
        }
    }

    while (q--)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        a[x][y] ^= 1;
        int cnt = 0;
        ans[x] = 0;
        for (int j = 0; j < m; j++)
        {
            if (a[x][j])
            {
                cnt++;
            }
            else
            {
                cnt = 0;
            }
            ans[x] = max(ans[x], cnt);
        }
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            res = max(res, ans[i]);
        }
        cout << res << endl;
    }

    return 0;
}