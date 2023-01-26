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
        ll total = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            total += a[i];
        }
        ll ans = 0, sum = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            sum += a[i];
            ll rem = total - sum;
            ans = max(ans, __gcd(sum, rem));
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}