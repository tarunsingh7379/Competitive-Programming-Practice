#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    if (sum % 3 != 0)
    {
        cout << 0 << endl;
    }
    else
    {
        sum = sum / 3;
        vector<ll> suff(n, 0);
        ll s = a[n - 1];
        if (s == sum)
        {
            suff[n - 1] = 1;
        }
        for (ll i = n - 2; i >= 0; i--)
        {
            s += a[i];
            suff[i] = suff[i + 1];
            if (s == sum)
            {
                suff[i]++;
            }
        }
        ll ans = 0;
        s = 0;
        for (ll i = 0; i < n - 2; i++)
        {
            s += a[i];
            if (s == sum)
            {
                ll x = suff[i + 2];
                ans += x;
            }
        }
        cout << ans << endl;
    }

    return 0;
}