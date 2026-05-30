#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(ll ind, ll ma, ll k, string &s, vector<vector<vector<ll>>> &dp)
{
    if (k > 1)
    {
        return -1e17;
    }
    if (ind >= s.size())
    {
        return 0;
    }
    if (dp[ind][ma][k] != -1)
    {
        return dp[ind][ma][k];
    }
    ll ans = -1e17;
    for (ll i = 0; i < 5; i++)
    {
        if (i < ma)
        {
            ans = max(ans, -(ll)pow(10, i) + func(ind + 1, max(ma, i), k + (i != (s[ind] - 'A')), s, dp));
        }
        else
        {
            ans = max(ans, (ll)pow(10, i) + func(ind + 1, max(ma, i), k + (i != (s[ind] - 'A')), s, dp));
        }
    }
    return dp[ind][ma][k] = ans;
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
        ll ans = 0;
        ll n = s.size();
        reverse(s.begin(), s.end());
        vector<vector<vector<ll>>> dp(n, vector<vector<ll>>(5, vector<ll>(2, -1)));
        cout << func(0, 0, 0, s, dp) << endl;
        t--;
    }

    return 0;
}