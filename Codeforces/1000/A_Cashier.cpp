#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, l, a;
    cin >> n >> l >> a;

    ll ans = 0;
    ll last = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        ll free_time = x - last;
        ans = ans + free_time / a;
        last = x + y;
    }
    ans = ans + (l - last) / a;
    cout << ans << endl;

    return 0;
}