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
        ll prev = a[0];
        ll last = -1;
        for (ll i = 1; i < n; i++)
        {
            if (a[i] >= a[i - 1])
            {
                if (last != -1)
                {
                    ll d = prev - last;
                    ans = ans + d;
                    last = -1;
                }
                prev = a[i];
            }
            else
            {
                last = a[i];
            }
        }
        if (last != -1)
        {
            ll d = prev - last;
            ans = ans + d;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}