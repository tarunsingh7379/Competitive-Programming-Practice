#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(ll ind, ll sum, vector<ll> &mod, ll n, vector<vector<ll>> &dp)
{
    if (ind >= n)
    {
        return (sum == 0);
    }
    if (dp[ind][sum] != -1)
    {
        return dp[ind][sum];
    }
    ll ans = 0;
    ans = (ans + (mod[0] * func(ind + 1, sum, mod, n, dp)) % M) % M;
    ans = (ans + (mod[1] * func(ind + 1, (sum + 1) % 3, mod, n, dp)) % M) % M;
    ans = (ans + (mod[2] * func(ind + 1, (sum + 2) % 3, mod, n, dp)) % M) % M;
    return dp[ind][sum] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, l, r;
    cin >> n >> l >> r;

    vector<ll> mod(3, 0);
    mod[0] = r / 3 - (l - 1) / 3;
    mod[1] = (r + 2) / 3 - (l + 1) / 3;
    mod[2] = (r + 1) / 3 - l / 3;

    vector<vector<ll>> dp(n, vector<ll>(3, -1));

    cout << func(0, 0, mod, n, dp) << endl;

    return 0;
}