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
        ll a, b;
        cin >> a >> b;
        ll ans = b - a;
        for (ll i = a; i < b; i++)
        {
            ll num = 0;
            for (ll j = 22; j >= 0; j--)
            {
                if (i & (1LL << j))
                {
                    num = num + (1LL << j);
                    if (!(b & (1LL << j)))
                    {
                        for (ll k = j - 1; k >= 0; k--)
                        {
                            if (i & (1LL << k))
                            {
                                num = num + (1LL << k);
                            }
                        }
                        break;
                    }
                }
                else
                {
                    if (b & (1LL << j))
                    {
                        num = num + (1LL << j);
                    }
                }
            }
            ans = min(ans, num + i + 1 - a - b);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}