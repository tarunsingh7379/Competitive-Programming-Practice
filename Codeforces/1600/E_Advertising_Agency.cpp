#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll fact[1005], powerr[1005];

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
    for (ll i = 1; i <= 1002; i++)
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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        vector<ll> total(n + 1, 0);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            total[a[i]]++;
        }
        sort(a.begin(), a.end());
        reverse(a.begin(), a.end());
        vector<ll> req(n + 1, 0);
        for (ll i = 0; i < k; i++)
        {
            req[a[i]]++;
        }
        ll ans = 1;
        for (ll i = 1; i <= n; i++)
        {
            ans = (ans * nCr(total[i], req[i])) % M;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}