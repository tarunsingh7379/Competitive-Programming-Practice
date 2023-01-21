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
        sort(a, a + n);
        ll ans = 0;
        ll l = 0;
        for (ll r = 2; r < n; r++)
        {
            while (l < r && (a[r] - a[l]) > 2)
            {
                l++;
            }
            ll x = (r - l - 1);
            if (x > 0)
            {
                ans += (x * (x + 1) / 2);
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}