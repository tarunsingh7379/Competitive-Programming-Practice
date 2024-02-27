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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    if (sum != 0)
    {
        cout << "YES" << endl;
        cout << 1 << endl;
        cout << 1 << " " << n << endl;
    }
    else
    {
        int ind = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0)
            {
                ind = i + 1;
                break;
            }
        }
        if (ind)
        {
            cout << "YES" << endl;
            cout << 2 << endl;
            cout << 1 << " " << ind << endl;
            cout << ind + 1 << " " << n << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}