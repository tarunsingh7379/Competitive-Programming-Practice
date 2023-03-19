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
    int l = 0, r = n - 1;
    int x = 0, y = 0, flag = 1;
    while (l <= r)
    {
        if (flag == 1)
        {
            if (a[l] >= a[r])
            {
                x += a[l];
                l++;
            }
            else
            {
                x += a[r];
                r--;
            }
        }
        else
        {
            if (a[l] >= a[r])
            {
                y += a[l];
                l++;
            }
            else
            {
                y += a[r];
                r--;
            }
        }
        flag ^= 1;
    }
    cout << x << " " << y << endl;
    return 0;
}