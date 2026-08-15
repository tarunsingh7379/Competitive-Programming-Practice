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
        vector<ll> suffix(n, 0);
        suffix[n - 1] = a[n - 1] - (n - 1);
        for (ll i = n - 2; i >= 0; i--)
        {
            suffix[i] = max(suffix[i + 1], a[i] - i);
        }
        ll ans = 0, prefix = a[0];
        for (ll i = 1; i <= n - 2; i++)
        {
            ans = max(ans, prefix + a[i] + suffix[i + 1]);
            prefix = max(prefix, a[i] + i);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}