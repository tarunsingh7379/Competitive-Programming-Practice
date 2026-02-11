#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(ll ind, ll last, ll n, vector<vector<ll>> &dp)
{
    if (ind >= n)
    {
        return (last != 0);
    }
    if (dp[ind][last] != -1)
    {
        return dp[ind][last];
    }
    ll cur = ind % 2 + 1;
    ll ans = 0;
    if (last == 0)
    {
        ans = (ans + func(ind + 1, cur, n, dp)) % M;
    }
    else if (cur != last)
    {
        ans = (ans + func(ind + 1, cur, n, dp)) % M;
    }
    ans = (ans + func(ind + 1, last, n, dp)) % M;
    return dp[ind][last] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<vector<ll>> dp(n, vector<ll>(3, -1));
    cout << func(0, 0, n, dp) << endl;

    return 0;
}