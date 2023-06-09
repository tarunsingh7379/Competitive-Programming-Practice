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
        ll n, k, q;
        cin >> n >> k >> q;
        ll ans = 0;
        ll cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x <= q)
            {
                cnt++;
            }
            else
            {
                if (cnt >= k)
                {
                    ll len = cnt - k + 1;
                    ans = ans + len * cnt - len * (2 * k + len - 1) / 2 + len;
                }
                cnt = 0;
            }
        }
        if (cnt >= k)
        {
            ll len = cnt - k + 1;
            ans = ans + len * cnt - len * (2 * k + len - 1) / 2 + len;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}