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
    ll g = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        g = __gcd(g, a[i]);
    }
    ll ans = -1;
    for (ll i = 0; i < n; i++)
    {
        if (g % a[i] == 0)
        {
            ans = a[i];
            break;
        }
    }
    cout << ans << endl;

    return 0;
}