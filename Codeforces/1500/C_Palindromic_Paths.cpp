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
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }

        int len = n + m - 1;

        vector<pair<int, int>> v(len);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                v[i + j].first += (a[i][j] == 0);
                v[i + j].second += (a[i][j] == 1);
            }
        }

        int ans = 0;
        for (int i = 0; i < len / 2; i++)
        {
            ans += min(v[i].first + v[len - i - 1].first, v[i].second + v[len - i - 1].second);
        }
        cout << ans << endl;

        t--;
    }

    return 0;
}