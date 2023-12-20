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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int flag = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (abs(a[i] - a[i + 1]) >= 2)
            {
                cout << "YES" << endl;
                cout << (i + 1) << " " << (i + 2) << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
        t--;
    }

    return 0;
}