#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int sieve[1000001];

void createSieve()
{
    int n = 1000000;
    for (int i = 2; i <= n; i++)
    {
        sieve[i] = 1;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (sieve[i] == 1)
        {
            for (int j = i * i; j <= n; j += i)
            {
                sieve[j] = 0;
            }
        }
    }
}

bool check(ll a, ll b, ll k, ll mid, vector<ll> &prefix)
{
    for (ll i = a; i <= b - mid + 1; i++)
    {
        ll cnt = prefix[i + mid - 1] - prefix[i - 1];
        if (cnt < k)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, b, k;
    cin >> a >> b >> k;
    createSieve();
    vector<ll> prefix(1000001, 0);
    for (ll i = 1; i <= 1000000; i++)
    {
        prefix[i] = prefix[i - 1] + sieve[i];
    }
    ll cnt = prefix[b] - prefix[a - 1];
    if (cnt < k)
    {
        cout << -1 << endl;
    }
    else
    {
        ll l = 1, r = b - a + 1;
        ll ans = r;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (check(a, b, k, mid, prefix))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}