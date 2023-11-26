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
    if (n == 1)
    {
        cout << -1 << endl;
    }
    else if (n == 2)
    {
        if (a[0] == a[1])
        {
            cout << -1 << endl;
        }
        else
        {
            cout << 1 << endl;
            cout << 1 << endl;
        }
    }
    else
    {
        int mi = INT_MAX, ind = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < mi)
            {
                mi = a[i];
                ind = i;
            }
        }
        cout << 1 << endl;
        cout << (ind + 1) << endl;
    }
    return 0;
}