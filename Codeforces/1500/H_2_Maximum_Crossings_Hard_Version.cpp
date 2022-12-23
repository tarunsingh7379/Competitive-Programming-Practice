#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll fen[200005];
ll n;

ll sum(ll ind)
{
    ll s = 0;
    while (ind > 0)
    {
        s += fen[ind];
        ind -= (ind & (~ind + 1));
    }
    return s;
}

void update(ll ind, ll val)
{
    while (ind <= n)
    {
        fen[ind] += val;
        ind += (ind & (~ind + 1));
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        cin >> n;
        ll a[n + 1];
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        ll ans = 0;
        for (ll i = 0; i <= n; i++)
        {
            fen[i] = 0;
        }
        for (ll i = 1; i <= n; i++)
        {
            ll x = sum(n) - sum(a[i] - 1);
            ans += x;
            update(a[i], 1);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}