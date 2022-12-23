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
        ll n, m;
        cin >> n >> m;
        ll a[n][m];
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        ll flag = 1;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                if (i == 0 || i == (n - 1))
                {
                    if (j == 0 || j == (m - 1))
                    {
                        if (a[i][j] > 2)
                        {
                            flag = 0;
                            break;
                        }
                    }
                    else
                    {
                        if (a[i][j] > 3)
                        {
                            flag = 0;
                            break;
                        }
                    }
                }
                else
                {
                    if (j == 0 || j == (m - 1))
                    {
                        if (a[i][j] > 3)
                        {
                            flag = 0;
                            break;
                        }
                    }
                    else
                    {
                        if (a[i][j] > 4)
                        {
                            flag = 0;
                            break;
                        }
                    }
                }
            }
            if (flag == 0)
            {
                break;
            }
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (ll i = 0; i < n; i++)
            {
                for (ll j = 0; j < m; j++)
                {
                    if (i == 0 || i == (n - 1))
                    {
                        if (j == 0 || j == (m - 1))
                        {
                            cout << 2 << " ";
                        }
                        else
                        {
                            cout << 3 << " ";
                        }
                    }
                    else
                    {
                        if (j == 0 || j == (m - 1))
                        {
                            cout << 3 << " ";
                        }
                        else
                        {
                            cout << 4 << " ";
                        }
                    }
                }
                cout << endl;
            }
        }

        t--;
    }

    return 0;
}