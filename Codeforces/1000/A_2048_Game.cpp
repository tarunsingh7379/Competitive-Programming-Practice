#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(ll ind, ll k, vector<ll> &a, vector<vector<ll>> &dp)
{
    if (k < 0)
    {
        return 0;
    }
    if (ind >= a.size())
    {
        if (k == 0)
        {
            return 1;
        }
        return 0;
    }
    if (dp[ind][k] != -1)
    {
        return dp[ind][k];
    }
    return dp[ind][k] = max(func(ind + 1, k - a[ind], a, dp), func(ind + 1, k, a, dp));
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
        vector<vector<ll>> dp(n, vector<ll>(2050, -1));
        if (func(0, 2048, a, dp))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }

    return 0;
}