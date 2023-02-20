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
    sort(a, a + n);

    ll ans = 0;
    ll l = 0;
    for (ll r = 0; r < n; r++)
    {
        while (l <= r && (a[r] - a[l] > 5))
        {
            l++;
        }
        ans = max(ans, r - l + 1);
    }
    cout << ans << endl;

    return 0;
}