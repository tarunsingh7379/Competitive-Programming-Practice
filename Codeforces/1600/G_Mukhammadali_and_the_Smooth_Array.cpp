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
        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        vector<ll> dp(n, 0);
        dp[0] = b[0];
        for (ll i = 1; i < n; i++)
        {
            dp[i] = b[i];
            for (ll j = 0; j < i; j++)
            {
                if (a[i] >= a[j])
                {
                    dp[i] = max(dp[i], dp[j] + b[i]);
                }
            }
        }
        ll ma = 0;
        for (ll i = 0; i < n; i++)
        {
            ma = max(ma, dp[i]);
        }
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            sum += b[i];
        }
        ll ans = sum - ma;
        cout << ans << endl;
        t--;
    }

    return 0;
}