#include <bits/stdc++.h>
typedef long long int ll;
#define M 998244353
using namespace std;

ll power(ll base, ll n, ll m)
{
    ll ans = 1;
    base = base % m;
    while (n != 0)
    {
        if (n % 2 == 1)
        {
            n = n - 1;
            ans = (ans * base) % m;
        }
        else
        {
            n = n / 2;
            base = (base * base) % m;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll a = 1, b = 1, c = 0;
    for (ll i = 3; i <= n; i++)
    {
        c = (a + b) % M;
        a = b;
        b = c;
    }
    ll ans = (b * power(power(2, n, M), M - 2, M)) % M;
    cout << ans << endl;
    return 0;
}