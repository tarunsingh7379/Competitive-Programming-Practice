#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(ll ind, ll sum, string &s, vector<vector<ll>> &dp)
{
    if (ind >= s.size())
    {
        return (sum == 0);
    }
    if (dp[ind][sum] != -1)
    {
        return dp[ind][sum];
    }
    ll ans = 0;
    ll d = s[ind] - '0';
    if (d == 2 || d == 3)
    {
        ans += func(ind + 1, (sum + d * d) % 9, s, dp);
    }
    ans += func(ind + 1, (sum + d) % 9, s, dp);
    return dp[ind][sum] = ans;
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
        int n = s.size();
        vector<vector<ll>> dp(n, vector<ll>(9, -1));
        cout << (func(0, 0, s, dp) ? "YES" : "NO") << endl;
        t--;
    }
    return 0;
}