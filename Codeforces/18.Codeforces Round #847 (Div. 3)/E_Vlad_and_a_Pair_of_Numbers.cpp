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
        if (n % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            ll a = 0, b = 0;
            ll rem = n;
            for (ll i = 32; i >= 0; i--)
            {
                if (n & (1LL << i))
                {
                    a |= (1LL << i);
                }
                else
                {
                    ll x = (1LL << (i + 1));
                    if (x <= rem)
                    {
                        a |= (1LL << i);
                        b |= (1LL << i);
                        rem -= x;
                    }
                }
            }
            if ((a + b) / 2 == n)
            {
                cout << a << " " << b << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        t--;
    }

    return 0;
}