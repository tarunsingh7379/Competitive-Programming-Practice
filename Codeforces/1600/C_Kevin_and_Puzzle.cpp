#include <bits/stdc++.h>
typedef long long int ll;
#define M 998244353
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
        vector<ll> a(n + 1, 0);
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        vector<ll> dp(n + 1, 0);
        dp[0] = 1;
        if (a[1] == 0)
        {
            dp[1] = 1;
        }
        for (ll i = 2; i <= n; i++)
        {
            if (a[i] == a[i - 1])
            {
                dp[i] = (dp[i] + dp[i - 1]) % M;
            }
            if (a[i] == a[i - 2] + 1)
            {
                dp[i] = (dp[i] + dp[i - 2]) % M;
            }
        }
        ll ans = (dp[n] + dp[n - 1]) % M;
        cout << ans << endl;
        t--;
    }

    return 0;
}