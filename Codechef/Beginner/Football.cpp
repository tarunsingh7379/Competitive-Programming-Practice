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
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x = a[i] * 20 - b[i] * 10;
            ans = max(ans, x);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}