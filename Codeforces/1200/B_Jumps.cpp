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
        ll x;
        cin >> x;
        ll l = 1, r = 1e6 + 1;
        ll ans = 0;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            ll sum = (mid * (mid + 1)) / 2;
            if (sum >= x)
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        ll diff = (ans * (ans + 1)) / 2 - x;
        if (diff == 1)
        {
            cout << (ans + 1) << endl;
        }
        else
        {
            cout << ans << endl;
        }
        t--;
    }

    return 0;
}