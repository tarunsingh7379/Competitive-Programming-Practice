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
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll prefix1[n];
    prefix1[0] = a[0];
    for (ll i = 1; i < n; i++)
    {
        prefix1[i] = prefix1[i - 1] + a[i];
    }
    sort(a, a + n);
    ll prefix2[n];
    prefix2[0] = a[0];
    for (ll i = 1; i < n; i++)
    {
        prefix2[i] = prefix2[i - 1] + a[i];
    }
    ll m;
    cin >> m;
    while (m--)
    {
        ll type, l, r;
        cin >> type >> l >> r;
        l--;
        r--;
        if (type == 1)
        {
            ll ans = prefix1[r];
            if (l - 1 >= 0)
            {
                ans -= prefix1[l - 1];
            }
            cout << ans << endl;
        }
        else
        {
            ll ans = prefix2[r];
            if (l - 1 >= 0)
            {
                ans -= prefix2[l - 1];
            }
            cout << ans << endl;
        }
    }

    return 0;
}