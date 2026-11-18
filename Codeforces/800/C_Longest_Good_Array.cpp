#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

/*
l, l+1, l+3, l+6, l+10, l+15
0,1,3,6,10,15
0,1,
*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll l, r;
        cin >> l >> r;
        ll L = 0, R = 1e9;
        ll ans = 0;
        while (L <= R)
        {
            ll mid = (L + R) / 2;
            ll right = l + mid * (mid + 1) / 2;
            if (right <= r)
            {
                ans = mid + 1;
                L = mid + 1;
            }
            else
            {
                R = mid - 1;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}