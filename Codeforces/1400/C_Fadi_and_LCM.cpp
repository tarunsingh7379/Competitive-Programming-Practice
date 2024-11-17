#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll k;
    cin >> k;
    vector<ll> fact;
    ll a, b;
    ll ans = k;
    for (ll i = 1; i * i <= k; i++)
    {
        if (k % i == 0)
        {
            a = i;
            b = k / i;
            ll g = __gcd(a, b);
            ll l = (a * b) / g;
            if (l == k)
            {
                ans = a;
            }
        }
    }
    cout << ans << " " << k / ans << endl;
    return 0;
}