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
        cin >> a[i];
    if (n == 1)
    {
        cout << a[0] << endl;
        return 0;
    }
    ll ans = 0, mi = 1e10;
    bool neg = false, pos = false;
    for (ll i = 0; i < n; i++)
    {
        mi = min(mi, abs(a[i]));
        ans += abs(a[i]);
        if (a[i] <= 0)
            neg = true;
        if (a[i] >= 0)
            pos = true;
    }
    if (!(neg && pos))
        ans -= 2 * mi;
    cout << ans << endl;

    return 0;
}