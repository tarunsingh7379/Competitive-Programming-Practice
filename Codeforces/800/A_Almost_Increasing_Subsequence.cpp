#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, q;
    cin >> n >> q;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> prefix(n);
    prefix[0] = 0;
    for (ll i = 1; i < n - 1; i++)
    {
        prefix[i] = prefix[i - 1];
        if (a[i - 1] >= a[i] && a[i] >= a[i + 1])
        {
            prefix[i]++;
        }
    }
    if (n > 1)
    {
        prefix[n - 1] = prefix[n - 2];
    }

    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        l--;
        r--;

        ll ans = r - l + 1;
        if (r - 1 >= 0)
        {
            ans -= prefix[r - 1];
            ans += prefix[l];
        }

        if (l == r)
        {
            ans = 1;
        }

        cout << ans << endl;
    }

    return 0;
}