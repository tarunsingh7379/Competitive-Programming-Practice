#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
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
    ll ans = 1;
    for (ll i = 1; i <= n; i++)
    {
        ans = (ans * i) % M;
    }
    ll x = power(2, n - 1, M);
    ans = ((ans - x) % M + M) % M;
    cout << ans << endl;

    return 0;
}