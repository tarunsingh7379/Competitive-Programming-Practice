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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int x = 0, y = 0;
        vector<int> used(n, 0);
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= 0 && b[i] <= 0)
            {
                x += a[i];
                used[i] = 1;
            }
            else if (b[i] >= 0 && a[i] <= 0)
            {
                y += b[i];
                used[i] = 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (!used[i])
            {
                if (x > y)
                {
                    if (a[i] >= 0)
                    {
                        y += a[i];
                    }
                    else
                    {
                        x += b[i];
                    }
                }
                else
                {
                    if (a[i] >= 0)
                    {
                        x += a[i];
                    }
                    else
                    {
                        y += b[i];
                    }
                }
            }
        }
        cout << min(x, y) << endl;
        t--;
    }

    return 0;
}