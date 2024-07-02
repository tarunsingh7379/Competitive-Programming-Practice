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
        ll l = 1, r = 1e10;
        ll ans = 0;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            ll x = mid * (mid - 1) / 2 + mid;
            if (x >= n)
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}