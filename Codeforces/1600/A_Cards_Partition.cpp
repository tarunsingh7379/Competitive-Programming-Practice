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
        ll ma = 0, sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            ma = max(ma, a[i]);
            sum += a[i];
        }
        ll ans = 0;
        for (ll i = n; i >= 1; i--)
        {
            ll req1 = ma * i;
            ll req2 = sum + (sum % i == 0 ? 0 : (i - (sum % i)));
            ll req = max(req1, req2);
            if (req - sum <= k)
            {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}