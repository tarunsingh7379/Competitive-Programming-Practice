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
    ll a[n + 1];
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<ll> dp(n + 2, 0);
    dp[1] = 0;
    for (ll i = 2; i <= n + 1; i++)
    {
        dp[i] = (dp[i - 1] + 1 + (dp[i - 1] - dp[a[i - 1]]) + 1 + M) % M;
    }
    cout << dp[n + 1] << endl;

    return 0;
}