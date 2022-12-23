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
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    vector<ll> prefix(n, 0);
    prefix[0] = a[0];
    for (ll i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i];
    }
    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        ll ans = prefix[x - 1] - (x - y - 1 >= 0 ? prefix[x - y - 1] : 0);
        cout << ans << endl;
    }

    return 0;
}