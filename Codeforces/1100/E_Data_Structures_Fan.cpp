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
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        string s;
        cin >> s;
        ll xor_0 = 0, xor_1 = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                xor_0 ^= a[i];
            }
            else
            {
                xor_1 ^= a[i];
            }
        }
        vector<ll> prefix(n, 0);
        ll x = 0;
        for (ll i = 0; i < n; i++)
        {
            x ^= a[i];
            prefix[i] = x;
        }
        ll q;
        cin >> q;
        while (q--)
        {
            ll type;
            cin >> type;
            if (type == 1)
            {
                ll l, r;
                cin >> l >> r;
                l--;
                r--;
                ll xr = prefix[r];
                if (l - 1 >= 0)
                {
                    xr ^= prefix[l - 1];
                }
                xor_0 ^= xr;
                xor_1 ^= xr;
            }
            else
            {
                ll flag;
                cin >> flag;
                if (flag == 0)
                {
                    cout << xor_0 << " ";
                }
                else
                {
                    cout << xor_1 << " ";
                }
            }
        }
        cout << endl;
        t--;
    }

    return 0;
}