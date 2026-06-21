#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(ll ind, ll start, vector<ll> &a, vector<vector<ll>> &dp)
{
    if (ind >= a.size())
    {
        return 0;
    }
    if (dp[ind][start] != -1)
    {
        return dp[ind][start];
    }
    ll ans = 0;
    if (!start)
    {
        ans = max(ans, 0 + func(ind + 1, start, a, dp));
        ans = max(ans, a[ind] + func(ind + a[ind], 1, a, dp));
    }
    else
    {
        ans = max(ans, a[ind] + func(ind + a[ind], start, a, dp));
    }
    return dp[ind][start] = ans;
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
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<vector<ll>> dp(n, vector<ll>(2, -1));
        cout << func(0, 0, a, dp) << endl;
        t--;
    }

    return 0;
}