#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = 0;
        for (ll i = n - 2; i >= 0; i--)
        {
            ll k = (a[i] + a[i + 1] - 1) / a[i + 1];
            ans += (k - 1);
            a[i] = a[i] / k;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}