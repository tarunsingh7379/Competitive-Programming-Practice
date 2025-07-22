#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll fact[1000001], powerr[1000001];

ll power(ll base, ll n, ll m)
{
    ll ans = 1;
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

void precomputeFactorial()
{
    fact[0] = 1;
    ll ans = 1;
    powerr[0] = power(fact[0], M - 2, M);
    for (ll i = 1; i <= 1000000; i++)
    {
        ans = (ans * i) % M;
        fact[i] = ans;
        powerr[i] = power(fact[i], M - 2, M);
    }
}

ll nCr(ll n, ll r)
{
    // Invalid Cases in nCr
    if (n < 0 || r < 0 || n < r)
    {
        return 0;
    }
    return (fact[n] * ((powerr[r] * powerr[n - r]) % M)) % M;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    precomputeFactorial();
    ll k;
    cin >> k;
    ll a[k];
    for (ll i = 0; i < k; i++)
    {
        cin >> a[i];
    }
    ll ans = 1, cur = 0;
    for (ll i = 0; i < k; i++)
    {
        ans = (ans * nCr(cur + a[i] - 1, a[i] - 1)) % M;
        cur += a[i];
    }
    cout << ans << endl;

    return 0;
}