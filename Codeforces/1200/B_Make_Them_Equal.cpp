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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);
    int d = a[n - 1] - a[0];
    int flag = 1;
    if (d % 2 == 0)
    {
        int target = a[0] + d / 2;
        for (int i = 0; i < n; i++)
        {
            int x = abs(target - a[i]);
            if (!(x == 0 || x == d / 2))
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << d / 2 << endl;
        }
    }
    else
    {
        int target = a[0] + d;
        flag = 1;
        for (int i = 0; i < n; i++)
        {
            int x = abs(target - a[i]);
            if (!(x == 0 || x == d))
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << d << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        flag = 1;
    }

    if (flag == 0)
    {
        int target = a[0] + d;
        flag = 1;
        for (int i = 0; i < n; i++)
        {
            int x = abs(target - a[i]);
            if (!(x == 0 || x == d))
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << d << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}