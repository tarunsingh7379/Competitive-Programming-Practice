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
    int a[m][3];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    vector<int> ans(n + 1, 0);
    for (int i = 0; i < m; i++)
    {
        vector<int> used(4, 0);
        for (int j = 0; j < 3; j++)
        {
            if (ans[a[i][j]])
            {
                used[ans[a[i][j]]] = 1;
            }
        }
        for (int j = 0; j < 3; j++)
        {
            if (ans[a[i][j]])
                continue;
            for (int k = 1; k <= 3; k++)
            {
                if (!used[k])
                {
                    ans[a[i][j]] = k;
                    used[k] = 1;
                    break;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}