#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n;
        cin >> n;
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            mp[x]++;
        }
        ll q;
        cin >> q;
        while (q--)
        {
            ll x, y;
            cin >> x >> y;
            ll d = x * x - 4 * y;
            if (d < 0)
            {
                cout << 0 << " ";
            }
            else
            {
                ll a = (x - sqrtl(d)) / 2;
                ll b = (x + sqrtl(d)) / 2;
                if (a + b != x || a * b != y)
                {
                    cout << 0 << " ";
                }
                else if (a == b)
                {
                    cout << mp[a] * (mp[a] - 1) / 2 << " ";
                }
                else
                {
                    cout << mp[a] * mp[b] << " ";
                }
            }
        }
        cout << endl;
        t--;
    }

    return 0;
}