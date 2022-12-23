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
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        if ((n + m - 1) % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            vector<vector<pair<int, int>>> v(n, vector<pair<int, int>>(m));
            int sum = 0;
            for (int j = 0; j < m; j++)
            {
                sum += a[0][j];
                v[0][j] = {sum, sum};
            }
            sum = a[0][0];
            for (int i = 1; i < n; i++)
            {
                sum += a[i][0];
                v[i][0] = {sum, sum};
            }
            for (int i = 1; i < n; i++)
            {
                for (int j = 1; j < m; j++)
                {
                    auto up = v[i - 1][j];
                    auto left = v[i][j - 1];
                    pair<int, int> p = {min(up.first, left.first), max(up.second, left.second)};
                    v[i][j] = {p.first + a[i][j], p.second + a[i][j]};
                }
            }
            if (v[n - 1][m - 1].first <= 0 && v[n - 1][m - 1].second >= 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        t--;
    }

    return 0;
}