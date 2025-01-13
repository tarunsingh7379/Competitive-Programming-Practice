#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(ll ind, ll prev, vector<ll> &a, vector<ll> &b,
        vector<vector<ll>> &dp)
{
    if (ind >= a.size())
    {
        return 0;
    }
    if (dp[ind][prev] != -1)
    {
        return dp[ind][prev];
    }
    ll ans = 0;
    if (prev == 1)
    {
        ans = max(ans, a[ind] + func(ind + 1, 2, a, b, dp));
        ans = max(ans, a[ind] + func(ind + 1, 3, a, b, dp));
    }
    else if (prev == 2)
    {
        ans = max(ans, b[ind] + func(ind + 1, 1, a, b, dp));
        ans = max(ans, b[ind] + func(ind + 1, 3, a, b, dp));
    }
    else
    {
        ans = max(ans, 0 + func(ind + 1, 1, a, b, dp));
        ans = max(ans, 0 + func(ind + 1, 2, a, b, dp));
        ans = max(ans, 0 + func(ind + 1, 3, a, b, dp));
    }
    return dp[ind][prev] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll ans = 0;
    vector<vector<ll>> dp(n, vector<ll>(4, -1));
    for (ll i = 0; i < n; i++)
    {
        ans = max(ans, func(i, 1, a, b, dp));
        ans = max(ans, func(i, 2, a, b, dp));
    }
    cout << ans << endl;
    return 0;
}