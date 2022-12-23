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
        ll x = a[n - 1];
        ll flag = 1;
        for (ll j = 1; j <= 10; j++)
        {
            flag = 1;
            x += x % 10;
            for (ll i = 0; i < n; i++)
            {
                ll cnt = 0;
                while (a[i] % 10 != x % 10)
                {
                    a[i] += a[i] % 10;
                    cnt++;
                    if (cnt >= 10)
                    {
                        break;
                    }
                }
                if (a[i] % 10 == 0 && a[i] != x)
                {
                    flag = 0;
                    break;
                }
                if (cnt >= 10)
                {
                    flag = 0;
                    break;
                }
                ll d = x - a[i];
                if (d % 20 != 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                break;
            }
        }

        if (flag == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        t--;
    }

    return 0;
}