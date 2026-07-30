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
        vector<ll> dp(n + 1, 1e9);
        for (ll i = 0; i < n; i++)
        {
            dp[a[i]] = 1;
        }
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = i; j <= n; j += i)
            {
                dp[j] = min(dp[j], dp[i] + dp[j / i]);
            }
        }
        for (ll i = 1; i <= n; i++)
        {
            if (dp[i] == 1e9)
                dp[i] = -1;
            cout << dp[i] << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}