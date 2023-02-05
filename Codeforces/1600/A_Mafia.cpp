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
    ll sum = 0;
    ll ma = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        ma = max(ma, a[i]);
    }
    ll ans = 0;
    ll z = (sum + n - 2) / (n - 1);
    ll l = ma, r = 1e15;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (mid >= z)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << endl;

    return 0;
}