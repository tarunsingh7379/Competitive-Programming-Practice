#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(ll ind, ll last, string &s, vector<vector<ll>> &dp)
{
    if (ind == s.size() - 1)
    {
        if (s[ind] == 'u')
        {
            return 1;
        }
        return 0;
    }
    if (dp[ind][last] != -1)
    {
        return dp[ind][last];
    }
    ll ans = 1e8;
    if (s[ind] == 's')
    {
        ans = min(ans, func(ind + 1, 1, s, dp));
    }
    else
    {
        if (last == 0)
        {
            ans = min(ans, 1 + func(ind + 1, 1, s, dp));
        }
        else
        {
            ans = min(ans, func(ind + 1, 0, s, dp));
        }
    }
    return dp[ind][last] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        string s;
        cin >> s;
        ll n = s.size();
        vector<vector<ll>> dp(n, vector<ll>(2, -1));
        ll ans = (s[0] != 's') + func(1, 1, s, dp);
        cout << ans << endl;
        t--;
    }

    return 0;
}