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
        ll a[n], b[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
        }
        ll cost = 0;
        for (ll i = 0; i < n; i++)
        {
            cost += max(0LL, a[i] - b[(i - 1 + n) % n]);
        }
        ll ans = 1e18;
        for (ll i = 0; i < n; i++)
        {
            ans = min(ans, a[i] + cost - max(0LL, (a[i] - b[(i - 1 + n) % n])));
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}