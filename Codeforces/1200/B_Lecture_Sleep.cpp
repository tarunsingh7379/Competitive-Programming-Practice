#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;

    ll a[n], b[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<ll> prefix(n, 0);
    if (b[0] == 0)
        prefix[0] = a[0];
    for (ll i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1];
        if (b[i] == 0)
            prefix[i] += a[i];
    }
    ll ans = 0;
    ll extra = 0;
    for (ll i = 0; i < n; i++)
    {
        if (b[i])
        {
            ans += a[i];
        }
        else
        {
            ll sum = prefix[min(i + k - 1, n - 1)];
            if (i - 1 >= 0)
            {
                sum -= prefix[i - 1];
            }
            extra = max(extra, sum);
        }
    }
    cout << ans + extra << endl;
    return 0;
}