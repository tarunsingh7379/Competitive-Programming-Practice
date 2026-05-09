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
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<vector<ll>> dp(n, vector<ll>(n, 0));
    for (ll len = 2; len <= n; len++)
    {
        for (ll l = 0; l + len - 1 < n; l++)
        {
            ll r = l + len - 1;
            dp[l][r] = a[r] - a[l] + min(dp[l + 1][r], dp[l][r - 1]);
        }
    }
    cout << dp[0][n - 1] << endl;

    return 0;
}