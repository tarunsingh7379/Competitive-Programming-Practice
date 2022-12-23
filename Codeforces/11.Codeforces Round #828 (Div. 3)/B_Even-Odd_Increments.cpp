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
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n);
        ll even = 0, odd = 0, sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if (a[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        while (q--)
        {
            ll type, x;
            cin >> type >> x;
            if (type == 0)
            {
                sum += (even * x);
                if (x % 2 != 0)
                {
                    odd += even;
                    even = 0;
                }
            }
            else
            {
                sum += (odd * x);
                if (x % 2 != 0)
                {
                    even += odd;
                    odd = 0;
                }
            }
            cout << sum << endl;
        }
        t--;
    }

    return 0;
}