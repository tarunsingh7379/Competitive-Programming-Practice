#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(ll ind, ll type, ll k, vector<ll> &a, vector<vector<ll>> &dp)
{
    if (ind == a.size() - 1)
    {
        ll prev = 0;
        if (type == 0)
        {
            prev = a[ind - 1];
        }
        else if (type == 1)
        {
            prev = 0;
        }
        else if (type == 2)
        {
            prev = a[ind - 1] - k;
        }
        else
        {
            prev = k;
        }
        return prev * a[ind];
    }
    if (dp[ind][type] != -1)
    {
        return dp[ind][type];
    }
    ll ans = 1e18;
    if (ind == 1)
    {
        if (a[ind] <= k)
        {
            ans = min(ans, a[ind - 1] * 0 + func(ind + 1, 0, k, a, dp));
            ans = min(ans, a[ind - 1] * a[ind] + func(ind + 1, 1, k, a, dp));
        }
        else
        {
            ans = min(ans, a[ind - 1] * k + func(ind + 1, 2, k, a, dp));
            ans = min(ans, a[ind - 1] * (a[ind] - k) + func(ind + 1, 3, k, a, dp));
        }
    }
    else
    {
        ll prev = 0;
        if (type == 0)
        {
            prev = a[ind - 1];
        }
        else if (type == 1)
        {
            prev = 0;
        }
        else if (type == 2)
        {
            prev = a[ind - 1] - k;
        }
        else
        {
            prev = k;
        }
        if (a[ind] <= k)
        {
            ans = min(ans, prev * 0 + func(ind + 1, 0, k, a, dp));
            ans = min(ans, prev * a[ind] + func(ind + 1, 1, k, a, dp));
        }
        else
        {
            ans = min(ans, prev * k + func(ind + 1, 2, k, a, dp));
            ans = min(ans, prev * (a[ind] - k) + func(ind + 1, 3, k, a, dp));
        }
    }
    return dp[ind][type] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<vector<ll>> dp(n, vector<ll>(4, -1));
        ll ans = func(1, 0, k, a, dp);
        cout << ans << endl;
        t--;
    }

    return 0;
}