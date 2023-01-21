#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll fact[200005], powerr[200005];

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
    for (ll i = 1; i <= 200000; i++)
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
        ll n, m, k;
        cin >> n >> m >> k;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        if (m == 1)
        {
            cout << n << endl;
        }
        else
        {
            vector<ll> prefix(n);
            prefix[m - 2] = 1;
            for (ll i = m - 1; i < n; i++)
            {
                prefix[i] = (prefix[i - 1] + nCr(i, m - 2)) % M;
            }
            ll ans = 0;
            ll l = 0;
            for (ll r = m - 1; r < n; r++)
            {
                while (l < r && (a[r] - a[l]) > k)
                {
                    l++;
                }
                ll x = (r - l - 1);
                if (x >= (m - 2))
                {
                    ans = (ans + prefix[x]) % M;
                }
            }
            cout << ans << endl;
        }

        t--;
    }

    return 0;
}