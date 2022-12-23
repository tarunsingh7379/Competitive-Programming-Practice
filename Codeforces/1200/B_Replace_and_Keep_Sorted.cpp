#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, q, k;
    cin >> n >> q >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        l--;
        r--;
        ll ans = 0;
        ans = (a[r] - a[l]) - (r - l) * 2 + (k - 1);

        cout << ans << endl;
    }

    return 0;
}