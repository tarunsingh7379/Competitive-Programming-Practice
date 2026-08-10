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
        ll a[2 * n + 1];
        for (ll i = 1; i <= 2 * n; i++)
        {
            cin >> a[i];
        }
        vector<ll> dp(2 * n + 1, 0);
        map<ll, ll> mp;
        for (ll i = 1; i <= 2 * n; i++)
        {
            ll last_pos = mp[a[i]];
            if (last_pos == 0)
            {
                dp[i] = dp[i - 1] + 1;
            }
            else
            {
                dp[i] = max(dp[i - 1] + 1, (i - last_pos + 1) * (i - last_pos + 1) + dp[last_pos - 1]);
            }
            mp[a[i]] = i;
        }
        cout << dp[2 * n] << endl;
        t--;
    }

    return 0;
}