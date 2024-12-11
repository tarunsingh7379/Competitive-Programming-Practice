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
        int grid[n][m];
        int cnt = 1;
        for (int i = 1; i < n; i += 2)
        {
            for (int j = 0; j < m; j++)
            {
                grid[i][j] = cnt++;
            }
        }
        for (int i = 0; i < n; i += 2)
        {
            for (int j = 0; j < m; j++)
            {
                grid[i][j] = cnt++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        t--;
    }

    return 0;
}