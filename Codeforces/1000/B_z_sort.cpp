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
    int b[n];
    int ind = 0, i = 0;
    for (i = 0; i < n && ind < n; i++)
    {
        b[ind] = a[i];
        ind += 2;
    }
    ind = 1;
    for (; i < n; i++)
    {
        b[ind] = a[i];
        ind += 2;
    }
    int flag = 1;
    for (int i = 1; i < n; i++)
    {
        if (i % 2)
        {
            if (b[i] < b[i - 1])
            {
                flag = 0;
                break;
            }
        }
        else
        {
            if (b[i] > b[i - 1])
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 0)
    {
        cout << "Impossible" << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}