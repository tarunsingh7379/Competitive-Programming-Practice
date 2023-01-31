#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(ll ind, ll type, vector<ll> &cost, vector<string> &v, vector<string> &rev, vector<vector<ll>> &dp)
{
    if (ind >= v.size())
    {
        return 0;
    }
    if (dp[ind][type] != -1)
    {
        return dp[ind][type];
    }
    ll ans = 1e18;

    if (type == 0)
    {
        if (v[ind - 1] <= v[ind])
        {
            ans = min(ans, func(ind + 1, 0, cost, v, rev, dp));
        }
        if (v[ind - 1] <= rev[ind])
        {
            ans = min(ans, cost[ind] + func(ind + 1, 1, cost, v, rev, dp));
        }
    }
    else
    {

        if (rev[ind - 1] <= v[ind])
        {
            ans = min(ans, func(ind + 1, 0, cost, v, rev, dp));
        }
        if (rev[ind - 1] <= rev[ind])
        {
            ans = min(ans, cost[ind] + func(ind + 1, 1, cost, v, rev, dp));
        }
    }
    return dp[ind][type] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> cost(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> cost[i];
    }
    vector<string> v, rev;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
        reverse(s.begin(), s.end());
        rev.push_back(s);
    }

    vector<vector<ll>> dp(n, vector<ll>(2, -1));
    ll ans = min(func(1, 0, cost, v, rev, dp), cost[0] + func(1, 1, cost, v, rev, dp));
    if (ans == 1e18)
    {
        ans = -1;
    }
    cout << ans << endl;

    return 0;
}