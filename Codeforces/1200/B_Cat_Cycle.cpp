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
        ll n, k;
        cin >> n >> k;
        if (n % 2 == 0)
        {
            ll x = k % n;
            if (x == 0)
            {
                cout << n << endl;
            }
            else
            {
                cout << x << endl;
            }
        }
        else
        {
            ll x = k % n;
            if (x == 0)
            {
                ll d = n / 2;
                ll z = ((k + d - 1) / d) % n;
                ll ans = 0;
                if (z == 0)
                {
                    ans = (n + n - 1) % n;
                }
                else
                {
                    ans = (n + z - 1) % n;
                }
                if (ans == 0)
                {
                    ans = n;
                }

                cout << ans << endl;
            }
            else
            {
                ll d = n / 2;
                ll z = ((k + d - 1) / d) % n;
                ll ans = 0;
                if (z == 0)
                {
                    ans = (x + n - 1) % n;
                }
                else
                {
                    ans = (x + z - 1) % n;
                }
                if (ans == 0)
                {
                    ans = n;
                }
                cout << ans << endl;
            }
        }

        t--;
    }

    return 0;
}