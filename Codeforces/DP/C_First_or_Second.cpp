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

        vector<ll> prefix(n + 1, 0), suffix(n + 1, 0);
        for (ll i = 1; i < n; i++)
        {
            prefix[i + 1] = prefix[i] + abs(a[i]);
        }
        for (ll i = n - 1; i >= 1; i--)
        {
            suffix[i - 1] = suffix[i] - a[i];
        }
        ll ans = suffix[0];
        for (ll i = 1; i < n; i++)
        {
            ans = max(ans, a[0] + prefix[i] + suffix[i]);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}