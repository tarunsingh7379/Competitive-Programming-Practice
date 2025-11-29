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
        ll ans = 1;
        while (n)
        {
            ll d = n % 10;
            n /= 10;
            ll cnt = 0;
            for (ll i = 0; i <= 9; i++)
            {
                for (ll j = 0; j <= 9; j++)
                {
                    for (ll k = 0; k <= 9; k++)
                    {
                        if ((i + j + k) == d)
                        {
                            cnt++;
                        }
                    }
                }
            }
            ans *= cnt;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}