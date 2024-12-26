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
        ll a, b, k;
        cin >> a >> b >> k;
        ll x = 0;
        if (a > b)
        {
            swap(a, b);
        }
        ll first = 0;
        for (ll i = 60; i >= 0; i--)
        {
            ll bit1 = !!(a & (1LL << i));
            ll bit2 = !!(b & (1LL << i));
            if (bit1 != bit2)
            {
                if (!first)
                {
                    first = 1;
                }
                else
                {
                    if (bit1 == 0)
                    {
                        x |= (1LL << i);
                        if (x > k)
                        {
                            x &= ~(1LL << i);
                        }
                    }
                }
            }
        }
        cout << abs((a ^ x) - (b ^ x)) << endl;
        t--;
    }

    return 0;
}