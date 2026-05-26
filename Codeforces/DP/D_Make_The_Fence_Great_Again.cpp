#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(ll ind, ll inc, vector<ll> &a, vector<ll> &b, vector<vector<ll>> &dp)
{
    if (ind >= a.size())
    {
        return 0;
    }
    if (dp[ind][inc] != -1)
    {
        return dp[ind][inc];
    }
    ll ans = 2e18;

    for (ll i = 0; i <= 2; i++)
    {
        if (a[ind - 1] + inc != a[ind] + i)
        {
            ans = min(ans, i * b[ind] + func(ind + 1, i, a, b, dp));
        }
    }

    return dp[ind][inc] = ans;
}

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
        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            cin >> b[i];
        }
        vector<vector<ll>> dp(n, vector<ll>(3, -1));
        ll ans = 2e18;
        for (ll i = 0; i <= 2; i++)
        {
            ans = min(ans, i * b[0] + func(1, i, a, b, dp));
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}