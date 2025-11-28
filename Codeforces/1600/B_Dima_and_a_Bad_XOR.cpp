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
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        x ^= a[i][0];
    }
    if (x > 0)
    {
        cout << "TAK" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << 1 << " ";
        }
        cout << endl;
    }
    else
    {
        int ind_i = -1, ind_j = -1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                if (a[i][j] != a[i][0])
                {
                    ind_i = i;
                    ind_j = j;
                    break;
                }
            }
            if (ind_i != -1)
            {
                break;
            }
        }
        if (ind_i == -1)
        {
            cout << "NIE" << endl;
        }
        else
        {
            cout << "TAK" << endl;
            for (int i = 0; i < n; i++)
            {
                if (ind_i == i)
                {
                    cout << ind_j + 1 << " ";
                }
                else
                {
                    cout << 1 << " ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}