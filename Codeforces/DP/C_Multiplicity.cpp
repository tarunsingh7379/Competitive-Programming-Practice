#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    ll ans = 0;
    vector<ll> dp(n + 1, 0);
    dp[0] = 1;
    for (ll i = 0; i < n; i++)
    {
        vector<ll> fact;
        for (ll j = 1; j * j <= a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                fact.push_back(j);
                if (j * j != a[i])
                    fact.push_back(a[i] / j);
            }
        }
        sort(fact.begin(), fact.end());
        reverse(fact.begin(), fact.end());
        for (auto num : fact)
        {
            dp[num] = (dp[num] + dp[num - 1]) % M;
        }
    }
    for (ll i = 1; i <= n; i++)
        ans = (ans + dp[i]) % M;
    cout << ans << endl;

    return 0;
}