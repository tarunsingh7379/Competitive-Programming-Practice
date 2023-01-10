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
        ll n, x;
        cin >> n >> x;
        ll a[n];
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % x != 0)
        {
            cout << n << endl;
        }
        else
        {
            ll l = n, r = -1;
            for (ll i = 0; i < n; i++)
            {
                if (a[i] % x != 0)
                {
                    l = min(l, i);
                    r = max(r, i);
                }
            }
            if (l == n)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << max(n - 1 - l, r) << endl;
            }
        }

        t--;
    }

    return 0;
}