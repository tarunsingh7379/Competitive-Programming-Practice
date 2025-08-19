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
    for (ll i = 1; i <= 1004; i++)
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

    ll n, x, pos;
    cin >> n >> x >> pos;

    precomputeFactorial();
    ll l = 0, r = n;
    ll cnt_less = 0, cnt_big = 0;
    while (l < r)
    {
        ll mid = (l + r) / 2;
        if (pos >= mid)
        {
            if (pos != mid)
            {
                cnt_less++;
            }
            l = mid + 1;
        }
        else
        {
            cnt_big++;
            r = mid;
        }
    }

    ll have_less = x - 1, have_big = n - x;
    ll big = ((nCr(have_big, cnt_big)) * fact[cnt_big]) % M;
    ll less = ((nCr(have_less, cnt_less)) * fact[cnt_less]) % M;
    ll other = n - cnt_big - cnt_less - 1;
    ll ans = (((big * less) % M) * fact[other]) % M;
    cout << ans << endl;

    return 0;
}