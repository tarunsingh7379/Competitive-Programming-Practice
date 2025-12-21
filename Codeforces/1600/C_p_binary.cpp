#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, p;
    cin >> n >> p;
    ll ans = -1;
    for (ll i = 1; i <= 40; i++)
    {
        ll x = n - i * p;
        if (x <= 0)
        {
            break;
        }
        priority_queue<ll> bits;
        for (ll j = 0; j <= 40; j++)
        {
            if (x & (1LL << j))
            {
                bits.push(j);
            }
        }
        if (bits.size() > i)
        {
            continue;
        }
        while (bits.size() < i)
        {
            ll z = bits.top();
            bits.pop();
            if (z == 0)
            {
                break;
            }
            bits.push(z - 1);
            bits.push(z - 1);
        }
        if (bits.size() == i)
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}