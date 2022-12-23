#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    ll ans = 0;
    ll l = 1, r = 1e9;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        ll odd = 2 * mid + 1;
        ll even = (odd - 4) / 4;
        ll total = mid + even;
        if (total >= n)
        {
            ans = odd;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    l = 0;
    r = 1e9;

    while (l <= r)
    {
        ll mid = (l + r) / 2;
        ll even = 4 * mid + 4;
        ll odd = (even - 1) / 2;
        ll total = mid + odd;
        if (total >= n)
        {
            ans = min(ans, even);
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << endl;

    return 0;
}