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
        ll ans = INT_MAX;
        for (ll i = 0; i <= n - 3; i++)
        {
            ll x = abs(a[i] - a[i + 1]) + abs(a[i] - a[i + 2]);
            ll y = abs(a[i + 1] - a[i]) + abs(a[i + 1] - a[i + 2]);
            ll z = abs(a[i + 2] - a[i]) + abs(a[i + 2] - a[i + 1]);
            ans = min({ans, x, y, z});
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}