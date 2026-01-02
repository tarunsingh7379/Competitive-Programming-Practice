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
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 1; i < n; i++)
    {
        a[i] = min(a[i], 2 * a[i - 1]);
    }
    ll ans = 1e18, cost = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        ll req = k / (1LL << i);
        cost += (req * a[i]);
        k -= (req * (1LL << i));
        if (k > 0)
        {
            ans = min(ans, cost + a[i]);
        }
        else
        {
            ans = min(ans, cost);
            break;
        }
    }
    cout << ans << endl;

    return 0;
}