#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int sieve[3001];

void createSieve()
{
    int n = 3000;
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    createSieve();
    vector<ll> v;
    for (ll i = 0; i <= 3000; i++)
    {
        if (sieve[i] == 1)
        {
            v.push_back(i);
        }
    }
    while (t)
    {
        ll x, y;
        cin >> x >> y;
        ll sum = x + y;
        ll z = *upper_bound(v.begin(), v.end(), sum);
        ll ans = z - sum;
        cout << ans << endl;
        t--;
    }

    return 0;
}