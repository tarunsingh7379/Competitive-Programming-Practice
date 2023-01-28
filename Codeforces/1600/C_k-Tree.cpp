#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll N, k, d;
    cin >> N >> k >> d;
    vector<vector<ll>> dp(N + 1, vector<ll>(2, 0));

    dp[0][1] = 1;

    for (ll n = 1; n <= N; n++)
    {
        for (ll flag = 0; flag <= 1; flag++)
        {
            ll ans = 0;
            for (ll i = 1; i <= k; i++)
            {
                if (n - i >= 0)
                {
                    ans = (ans + dp[n - i][i >= d ? 1 : flag]) % M;
                }
            }
            dp[n][flag] = ans;
        }
    }
    cout << dp[N][0] << endl;

    return 0;
}