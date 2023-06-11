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
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);

        vector<ll> prefix(n, 0);
        prefix[0] = a[0];
        for (ll i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + a[i];
        }

        ll ans = 0;
        for (ll i = 0; i <= k; i++)
        {
            ll l = 2 * i, r = n - (k - i) - 1;
            ll sum = prefix[r];
            if (l - 1 >= 0)
            {
                sum -= prefix[l - 1];
            }
            ans = max(ans, sum);
        }
        cout << ans << endl;

        t--;
    }

    return 0;
}