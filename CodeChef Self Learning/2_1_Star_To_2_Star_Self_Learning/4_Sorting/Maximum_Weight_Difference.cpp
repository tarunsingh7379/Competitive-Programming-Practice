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
        ll n, k;
        cin >> n >> k;
        ll a[n];
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sort(a, a + n);
        ll sum1 = 0, sum2 = 0;
        for (ll i = 0; i < k; i++)
        {
            sum1 += a[i];
        }
        reverse(a, a + n);
        for (ll i = 0; i < k; i++)
        {
            sum2 += a[i];
        }
        ll ans = max(abs(2 * sum1 - sum), abs(2 * sum2 - sum));
        cout << ans << endl;
        t--;
    }

    return 0;
}