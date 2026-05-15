#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(ll ind, ll happy, ll n, ll k, vector<ll> &c, vector<ll> &h, vector<vector<ll>> &dp)
{
    if (happy == 0)
    {
        return 0;
    }
    if (ind == 0)
    {
        return 1e15;
    }
    if (dp[ind][happy] != -1)
    {
        return dp[ind][happy];
    }
    ll ans = 1e15;
    if (happy >= h[ind])
    {
        ll cost = c[ind] + func(ind - 1, happy - h[ind], n, k, c, h, dp);
        if (cost <= (ind - 1) * k)
        {
            ans = min(ans, cost);
        }
    }
    ans = min(ans, func(ind - 1, happy, n, k, c, h, dp));
    return dp[ind][happy] = ans;
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
        vector<ll> c(n + 1), h(n + 1);
        ll sum = 0;
        for (ll i = 1; i <= n; i++)
        {
            cin >> c[i] >> h[i];
            sum += h[i];
        }
        vector<vector<ll>> dp(n + 1, vector<ll>(sum + 1, -1));
        for (ll happy = sum; happy >= 0; happy--)
        {
            if (func(n, happy, n, k, c, h, dp) <= n * k)
            {
                cout << happy << endl;
                break;
            }
        }
        t--;
    }

    return 0;
}