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
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        int flag = 1;
        int x = 0, y = 0, z = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'a')
            {
                x++;
            }
            if (a[i] == 'b')
            {
                y++;
            }
            if (a[i] == 'c')
            {
                z++;
            }
            if (b[i] == 'a')
            {
                x--;
            }
            if (b[i] == 'b')
            {
                y--;
            }
            if (b[i] == 'c')
            {
                z--;
            }
        }
        if (x != 0 || y != 0 || z != 0)
        {
            flag = 0;
        }
        if (flag == 1)
        {
            int i = 0, j = 0;
            while (i < n)
            {
                if (a[i] == 'b')
                {
                    i++;
                    continue;
                }
                while (j < n && b[j] == 'b')
                {
                    j++;
                }
                if (a[i] != b[j])
                {
                    flag = 0;
                    break;
                }
                else
                {
                    if (a[i] == 'a')
                    {
                        if (i > j)
                        {
                            flag = 0;
                            break;
                        }
                    }
                    else
                    {
                        if (j > i)
                        {
                            flag = 0;
                            break;
                        }
                    }
                    j++;
                }
                i++;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}