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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + m);
    if (a[n - 1] < b[0])
    {
        if (a[n - 1] >= 2 * a[0])
        {
            cout << a[n - 1] << endl;
        }
        else
        {
            if (2 * a[0] < b[0])
            {
                cout << 2 * a[0] << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}