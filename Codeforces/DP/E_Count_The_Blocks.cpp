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
    for (ll i = 1; i < n; i++)
    {
        ll ans = 0;
        ans = (ans + (2LL * 10 * 9 * power(10, n - i - 1, M)) % M) % M;
        ans = (ans + ((n - i - 1) * 10 * 9 * 9 * power(10, n - i - 2, M)) % M) % M;
        cout << ans << " ";
    }
    cout << 10 << endl;

    return 0;
}