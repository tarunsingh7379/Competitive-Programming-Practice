#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(ll ind, ll w, vector<vector<ll>> &v, vector<vector<ll>> &dp)
{
    if (ind >= v.size())
    {
        return 0;
    }
    if (dp[ind][w] != -1)
    {
        return dp[ind][w];
    }

    ll pick = 0;
    if (v[ind][2] <= w)
    {
        pick = v[ind][0] * v[ind][1] + func(ind + 1, w - v[ind][2], v, dp);
    }
    ll notpick = func(ind + 1, w, v, dp);
    return dp[ind][w] = max(pick, notpick);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n, w;
        cin >> n >> w;
        vector<vector<ll>> v(n);
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < 3; j++)
            {
                ll x;
                cin >> x;
                v[i].push_back(x);
            }
        }
        vector<vector<ll>> dp(n, vector<ll>(w + 1, -1));
        cout << func(0, w, v, dp) << endl;
        t--;
    }

    return 0;
}