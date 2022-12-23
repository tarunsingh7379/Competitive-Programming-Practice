#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(ll ind, ll lc, ll b)
{
    ll ans = ind;
    if (ind >= lc)
    {
        ll st = ind / lc;
        ll got = (st - 1) * b + b - 1;
        if (ind % lc != 0)
        {
            got += min(b - 1, (ind % lc)) + 1;
        }
        else
        {
            got++;
        }
        ans = ans - got;
    }
    else
    {
        ans = ans - min(ind, b - 1);
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
        ll a, b, q;
        cin >> a >> b >> q;
        if (a > b)
        {
            swap(a, b);
        }
        ll lc = (a * b) / __gcd(a, b);
        while (q--)
        {
            ll l, r;
            cin >> l >> r;
            ll ans = func(r, lc, b) - func(l - 1, lc, b);
            cout << ans << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}