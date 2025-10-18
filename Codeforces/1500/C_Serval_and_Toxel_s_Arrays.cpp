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
        vector<ll> last(n + k + 1, -1);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            last[a[i]] = 0;
        }
        vector<ll> freq(n + k + 1, 0);
        for (ll i = 1; i <= k; i++)
        {
            ll ind, val;
            cin >> ind >> val;
            ind--;
            freq[a[ind]] += (i - last[a[ind]]);
            last[a[ind]] = -1;
            a[ind] = val;
            last[a[ind]] = i;
        }
        for (ll i = 0; i <= n + k; i++)
        {
            if (last[i] != -1)
            {
                freq[i] += (k + 1 - last[i]);
            }
        }
        ll ans = 0;
        ll total = k * (k + 1) / 2;
        for (ll i = 0; i <= n + k; i++)
        {
            ll extra = (k + 1 - freq[i]) * (k - freq[i]) / 2;
            ans = ans + (total - extra);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}