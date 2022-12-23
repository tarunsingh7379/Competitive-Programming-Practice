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
        ll n;
        cin >> n;
        ll ans = 0;
        ll x = 1;
        for (ll i = 2; i <= 41; i++)
        {
            ll prev = x;
            x = (x * i) / __gcd(x, i);
            ans = (ans + ((n / prev - n / x) * i) % M) % M;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}