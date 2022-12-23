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
        for (ll i = 0; i < n; i += 2)
        {
            ans += a[i];
        }
        ll extra = 0;
        ll sum = 0;
        ll mi = 0;
        for (ll i = 0; i < n - 1; i += 2)
        {
            sum -= a[i];
            sum += a[i + 1];
            extra = max(extra, sum - mi);
            mi = min(mi, sum);
        }
        sum = 0;
        mi = 0;
        for (ll i = 1; i < n - 1; i += 2)
        {
            sum += a[i];
            sum -= a[i + 1];
            extra = max(extra, sum - mi);
            mi = min(mi, sum);
        }
        cout << ans + extra << endl;
        t--;
    }

    return 0;
}