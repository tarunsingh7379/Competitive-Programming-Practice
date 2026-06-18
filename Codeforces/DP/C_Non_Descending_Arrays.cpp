#include <bits/stdc++.h>
typedef long long int ll;
#define M 998244353
using namespace std;

ll dp[101][2][2];

ll func(ll ind, ll pos1, ll pos2, vector<vector<ll>> &v)
{
    if (ind >= v[0].size())
    {
        return 1;
    }
    if (dp[ind][pos1][pos2] != -1)
    {
        return dp[ind][pos1][pos2];
    }
    ll ans = 0;
    if (v[0][ind] >= v[pos1][ind - 1] && v[1][ind] >= v[pos2][ind - 1])
    {
        ans = (ans + func(ind + 1, 0, 1, v)) % M;
    }
    if (v[1][ind] >= v[pos1][ind - 1] && v[0][ind] >= v[pos2][ind - 1])
    {
        ans = (ans + func(ind + 1, 1, 0, v)) % M;
    }
    return dp[ind][pos1][pos2] = ans;
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
        vector<vector<ll>> v(2, vector<ll>(n, 0));
        for (ll i = 0; i < n; i++)
        {
            cin >> v[0][i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> v[1][i];
        }
        memset(dp, -1, sizeof(dp));
        ll ans = func(1, 0, 1, v);
        memset(dp, -1, sizeof(dp));
        ans = (ans + func(1, 1, 0, v)) % M;
        cout << ans << endl;
        t--;
    }

    return 0;
}