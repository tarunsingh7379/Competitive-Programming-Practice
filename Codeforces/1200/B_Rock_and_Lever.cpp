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

        ll ans = 0;
        for (ll i = 0; i <= 32; i++)
        {
            ll cnt = 0;
            for (ll j = 0; j < n; j++)
            {
                if ((a[j] >= (1LL << i)) && (a[j] <= ((1LL << (i + 1)) - 1)))
                {
                    cnt++;
                }
            }
            ans = ans + (cnt * (cnt - 1)) / 2;
        }

        cout << ans << endl;
        t--;
    }

    return 0;
}