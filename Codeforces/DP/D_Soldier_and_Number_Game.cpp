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
    vector<ll> spf(5000001, 0), dp(5000001, 0), prefix_sum_dp(5000001, 0);
    ll temp = 0;
    for (ll i = 2; i <= 5000000; i++)
    {
        if (!spf[i])
            for (ll j = i; j <= 5000000; j += i)
            {
                if (!spf[j])
                    spf[j] = i;
            }
    }
    for (ll i = 2; i <= 5000000; i++)
    {
        dp[i] = dp[i / spf[i]] + 1;
        temp += dp[i];
        prefix_sum_dp[i] = temp;
    }
    while (t)
    {
        ll a, b;
        cin >> a >> b;
        cout << prefix_sum_dp[a] - prefix_sum_dp[b] << endl;
        t--;
    }

    return 0;
}