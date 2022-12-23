#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(ll k, ll c, ll m, ll x)
{
    c -= k;
    m -= k;
    if (c < 0 || m < 0)
    {
        return false;
    }
    if (x >= k)
    {
        return true;
    }
    k -= x;
    return (k <= (c + m));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll c, m, x;
        cin >> c >> m >> x;
        ll ans = 0;
        ll l = 0, r = 1e10;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (check(mid, c, m, x))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}