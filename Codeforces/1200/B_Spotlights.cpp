#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

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
    vector<vector<int>> row(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += a[i][j];
            row[i][j] = sum;
        }
    }
    vector<vector<int>> col(m, vector<int>(n, 0));
    for (int j = 0; j < m; j++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i][j];
            col[j][i] = sum;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!a[i][j])
            {
                if (j - 1 >= 0 && row[i][j - 1])
                {
                    ans++;
                }
                if (row[i][m - 1] - row[i][j])
                {
                    ans++;
                }
                if (i - 1 >= 0 && col[j][i - 1])
                {
                    ans++;
                }
                if (col[j][n - 1] - col[j][i])
                {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}