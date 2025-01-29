#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans = max(ans, a[i]);
    }
    if (k >= n)
    {
        cout << ans << endl;
    }
    else
    {
        ll l = 0, r = 2 * (n - k) - 1;
        while (l < r)
        {
            ans = max(ans, a[l] + a[r]);
            l++;
            r--;
        }
        cout << ans << endl;
    }

    return 0;
}