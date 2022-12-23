#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll dp[21][1001];

ll func(ll ind, ll prev, ll n, ll m)
{
    if (ind >= 2 * m)
    {
        return 1;
    }
    if (dp[ind][prev] != -1)
    {
        return dp[ind][prev];
    }
    ll ans = 0;
    for (ll i = prev; i <= n; i++)
    {

        ans = (ans + func(ind + 1, i, n, m)) % M;
    }
    return dp[ind][prev] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    memset(dp, -1, sizeof(dp));
    cout << func(0, 1, n, m) << endl;
    return 0;
}