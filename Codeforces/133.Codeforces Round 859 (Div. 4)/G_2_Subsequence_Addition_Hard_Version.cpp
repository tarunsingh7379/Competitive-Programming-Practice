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
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        if (a[0] != 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            ll flag = 1;
            ll sum = a[0];
            for (int i = 1; i < n; i++)
            {
                if (a[i] > sum)
                {
                    flag = 0;
                    break;
                }
                sum += a[i];
            }
            if (flag == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        t--;
    }

    return 0;
}