#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(ll l, ll r, ll n, vector<vector<ll>> &dp)
{
    if (r <= l)
        return 0;
    if (r - l + 1 < 3)
        return 0;
    if (dp[l][r] != -1)
        return dp[l][r];
    ll ans = 1e18;
    for (ll k = l + 1; k < r; k++)
    {
        ans = min(ans, l * k * r + func(l, k, n, dp) + func(k, r, n, dp));
    }
    return dp[l][r] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<vector<ll>> dp(n + 1, vector<ll>(n + 1, -1));
    cout << func(1, n, n, dp) << endl;
    return 0;
}