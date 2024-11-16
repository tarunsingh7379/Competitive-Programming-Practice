#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t)
    {
        ll n;
        cin >> n;
        ll a[n];
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        ll sum1 = 0, sum2 = 0;
        for (ll i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                sum1 += (a[i] - 1);
            }
            else
            {
                sum2 += (a[i] - 1);
            }
        }
        if (2 * sum1 <= sum)
        {
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    cout << 1 << " ";
                }
                else
                {
                    cout << a[i] << " ";
                }
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    cout << a[i] << " ";
                }
                else
                {
                    cout << 1 << " ";
                }
            }
        }
        cout << endl;
        t--;
    }

    return 0;
}