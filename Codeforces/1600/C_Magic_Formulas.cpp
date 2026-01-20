#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll a[n + 1];
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<ll> prefix(n + 1, 0);
    ll x = 0;
    for (ll i = 1; i <= n; i++)
    {
        x ^= i;
        prefix[i] = x;
    }
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll y = n / i;
        if (y % 2 == 1)
        {
            ans ^= prefix[i - 1];
        }
        ans ^= a[i];
        ans ^= prefix[n % i];
    }
    cout << ans << endl;

    return 0;
}