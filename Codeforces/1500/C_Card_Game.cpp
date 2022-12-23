#include <bits/stdc++.h>
typedef long long int ll;
#define M 998244353
using namespace std;

ll fact[105], powerr[105];

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
    for (ll i = 1; i <= 100; i++)
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
    int t;
    cin >> t;
    precomputeFactorial();
    while (t)
    {
        ll n;
        cin >> n;
        ll win = nCr(n - 1, n / 2);
        ll lose = nCr(n - 2, n / 2);
        ll draw = 1;
        cout << win << " " << lose << " " << draw << endl;
        t--;
    }

    return 0;
}