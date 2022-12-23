#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(ll i, ll j, vector<vector<ll>> &left, vector<vector<ll>> &top, vector<vector<ll>> &dp)
{
    if (i < 0 || j < 0)
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    ll l = left[i][j] + func(i - 1, j, left, top, dp);
    ll r = top[i][j] + func(i, j - 1, left, top, dp);
    return dp[i][j] = max(l, r);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n, m;
        cin >> n >> m;
        vector<vector<ll>> a(n, vector<ll>(m));
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        vector<vector<ll>> b(n, vector<ll>(m));
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> b[i][j];
            }
        }
        vector<vector<ll>> left(n, vector<ll>(m, 0));
        for (ll i = 0; i < n; i++)
        {
            left[i][0] = a[i][0];
            for (ll j = 1; j < m; j++)
            {
                left[i][j] = left[i][j - 1] + a[i][j];
            }
        }
        vector<vector<ll>> top(n, vector<ll>(m, 0));
        for (ll j = 0; j < m; j++)
        {
            top[0][j] = b[0][j];
            for (ll i = 1; i < n; i++)
            {
                top[i][j] = top[i - 1][j] + b[i][j];
            }
        }
        vector<vector<ll>> dp(n, vector<ll>(m, -1));
        cout << func(n - 1, m - 1, left, top, dp) << endl;
        t--;
    }

    return 0;
}