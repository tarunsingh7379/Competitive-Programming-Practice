#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    ll ans = 0;

    vector<ll> count(m, n / m);
    for (ll i = 1; i <= n % m; i++)
    {
        count[i]++;
    }
    for (ll i = 0; i < m; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            ll x = (i * i + j * j) % m;
            if (x == 0)
            {
                ans += count[i] * count[j];
            }
        }
    }

    cout << ans << endl;

    return 0;
}