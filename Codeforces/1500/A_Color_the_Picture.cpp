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
        ll n, m, k;
        cin >> n >> m >> k;
        vector<ll> a(k);
        for (ll i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        ll sum1 = 0, odd1 = 0, sum2 = 0, odd2 = 0;
        for (ll i = 0; i < k; i++)
        {
            ll x = a[i] / m;
            ll y = a[i] / n;
            if (x >= 2)
            {
                if (x >= 3)
                {
                    odd1 = 1;
                }
                sum1 += x;
            }
            if (y >= 2)
            {
                if (y >= 3)
                {
                    odd2 = 1;
                }
                sum2 += y;
            }
        }
        if (n % 2 == 0 && m % 2 == 0 && (sum1 >= n || sum2 >= m))
        {
            cout << "Yes" << endl;
        }
        else if (n % 2 == 0 && m % 2 != 0 && (sum1 >= n || (sum2 >= m && odd2 == 1)))
        {
            cout << "Yes" << endl;
        }
        else if (n % 2 != 0 && m % 2 == 0 && ((sum1 >= n && odd1 == 1) || sum2 >= m))
        {
            cout << "Yes" << endl;
        }
        else if (n % 2 != 0 && m % 2 != 0 && ((sum1 >= n && odd1 == 1) || (sum2 >= m && odd2 == 1)))
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