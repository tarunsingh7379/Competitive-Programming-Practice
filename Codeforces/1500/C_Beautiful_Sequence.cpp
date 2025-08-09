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
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> dp(4, 0);
        dp[0] = 1;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                dp[1] = (dp[1] + dp[0]) % M;
            }
            else if (a[i] == 2)
            {
                dp[2] = (dp[2] + dp[2]) % M;
                dp[2] = (dp[2] + dp[1]) % M;
            }
            else
            {
                dp[3] = (dp[3] + dp[2]) % M;
            }
        }
        cout << dp[3] << endl;
        t--;
    }

    return 0;
}