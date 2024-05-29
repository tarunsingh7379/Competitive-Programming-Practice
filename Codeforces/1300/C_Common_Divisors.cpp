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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll g = 0;
    for (ll i = 0; i < n; i++)
    {
        g = __gcd(g, a[i]);
    }

    ll ans = 0;
    for (ll i = 1; i * i <= g; i++)
    {
        if (g % i == 0)
        {
            ans++;
            if (g / i != i)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}