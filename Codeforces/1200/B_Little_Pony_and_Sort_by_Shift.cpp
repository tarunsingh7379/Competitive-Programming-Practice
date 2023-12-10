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
    int gap = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            gap++;
        }
    }
    if (gap == 0)
    {
        cout << 0 << endl;
    }
    else if (gap == 1)
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > a[i + 1])
            {
                cnt = n - 1 - i;
                break;
            }
        }
        if (a[n - 1] <= a[0])
        {
            cout << cnt << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}