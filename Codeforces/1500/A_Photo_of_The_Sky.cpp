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
    ll a[2 * n];
    for (ll i = 0; i < 2 * n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 2 * n);
    ll ans = 1e18;
    for (ll i = 1; i < n; i++)
    {
        ans = min(ans, (a[2 * n - 1] - a[0]) * (a[i + n - 1] - a[i]));
    }
    ans = min(ans, (a[n - 1] - a[0]) * (a[2 * n - 1] - a[n]));
    cout << ans << endl;

    return 0;
}