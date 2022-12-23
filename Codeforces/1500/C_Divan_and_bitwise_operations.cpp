#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll power(ll base, ll n, ll m)
{
    ll ans = 1;
    base = base % m;
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n, m;
        cin >> n >> m;
        ll o = 0;
        for (ll i = 0; i < m; i++)
        {
            ll l, r, x;
            cin >> l >> r >> x;
            o = o | x;
        }
        ll ans = (power(2, n - 1, M) * o) % M;
        cout << ans << endl;
        t--;
    }

    return 0;
}