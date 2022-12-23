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
        ll l, r;
        cin >> l >> r;
        ll ans = r - l;
        for (ll i = 10; i <= 1e9; i *= 10)
        {
            ll left = l / i;
            ll right = r / i;
            ll extra = right - left;
            ans = ans + extra;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}