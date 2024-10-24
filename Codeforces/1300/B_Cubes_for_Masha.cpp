#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n][10];
    memset(a, 0, sizeof(a));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            int x;
            cin >> x;
            a[i][x] = 1;
        }
    }
    bool ok = false;
    for (int i = 1; i < 1000; i++)
    {
        ok = false;
        if (i < 10)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[j][i])
                {
                    ok = true;
                    break;
                }
            }
        }
        else if (i < 100)
        {
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    if (j != k && a[j][i / 10] && a[k][i % 10])
                    {
                        ok = true;
                        break;
                    }
                }
                if (ok)
                {
                    break;
                }
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    for (int l = 0; l < n; l++)
                    {
                        if (j != k && j != l && k != l && a[j][i / 100] && a[k][i / 10] && a[l][i % 10])
                        {
                            ok = true;
                            break;
                        }
                    }
                    if (ok)
                    {
                        break;
                    }
                }
                if (ok)
                {
                    break;
                }
            }
        }
        if (!ok)
        {
            cout << i - 1 << endl;
            return 0;
        }
    }
    cout << 999 << endl;
    return 0;
}