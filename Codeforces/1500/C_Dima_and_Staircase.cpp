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
    ll q;
    cin >> q;
    ll ans = 0;
    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        x--;
        ans = max(ans, a[x]);
        cout << ans << endl;
        ans += y;
    }

    return 0;
}