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
        ll ans = 0;

        vector<ll> v(n, 0);

        for (ll i = 0; i < n - 1; i++)
        {
            if (a[i] < 2 * a[i + 1])
            {
                v[i] = 1;
            }
        }

        vector<ll> prefix(n, 0);
        prefix[0] = v[0];
        for (ll i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + v[i];
        }

        for (ll i = 0; i < n - k; i++)
        {
            ll sum = prefix[i + k - 1];
            if (i - 1 >= 0)
            {
                sum -= prefix[i - 1];
            }
            if (sum == k)
            {
                ans++;
            }
        }

        cout << ans << endl;
        t--;
    }

    return 0;
}