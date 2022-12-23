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
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll suffix[n] = {0};
    suffix[n - 1] = a[n - 1];
    for (ll i = n - 2; i >= 0; i--)
    {
        suffix[i] = __gcd(suffix[i + 1], a[i]);
    }

    ll ans = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        ll g = a[i] * suffix[i + 1] / __gcd(a[i], suffix[i + 1]);
        ans = __gcd(ans, g);
    }
    cout << ans << endl;
    return 0;
}