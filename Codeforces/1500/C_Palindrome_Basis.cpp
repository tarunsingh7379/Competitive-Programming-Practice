#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll dp[500][40001];

ll func(ll ind, ll k, vector<ll> &pal)
{
    if (k == 0)
    {
        return 1;
    }
    if (ind >= pal.size())
    {
        return 0;
    }
    if (dp[ind][k] != -1)
    {
        return dp[ind][k];
    }
    ll pick = 0;
    if (pal[ind] <= k)
    {
        pick = func(ind, k - pal[ind], pal);
    }
    ll notPick = func(ind + 1, k, pal);
    return dp[ind][k] = (pick + notPick) % M;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    vector<ll> pal;
    for (ll i = 1; i <= 40000; i++)
    {
        string s = to_string(i);
        string x = s;
        reverse(x.begin(), x.end());
        if (x == s)
        {
            pal.push_back(i);
        }
    }
    memset(dp, -1, sizeof(dp));
    ll x = func(0, 40000, pal);
    while (t)
    {
        ll n;
        cin >> n;
        cout << dp[0][n] << endl;
        t--;
    }

    return 0;
}