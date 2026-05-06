#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(ll ind, ll k, vector<ll> &a, vector<vector<ll>> &dp)
{
    if (ind >= a.size())
    {
        return 0;
    }
    if (dp[ind][k] != -1)
    {
        return dp[ind][k];
    }
    ll ans = 1e17;
    ll cnt = 0, mi = 1e10, len = 0;
    for (ll i = ind; i <= ind + k && i < a.size(); i++)
    {
        if (a[i] < mi)
        {
            mi = a[i];
            cnt = 1;
        }
        else if (mi == a[i])
        {
            cnt++;
        }
        len = i - ind + 1;
        ans = min(ans, len * mi + func(i + 1, k - (len - cnt), a, dp));
    }
    return dp[ind][k] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<vector<ll>> dp(n, vector<ll>(k + 1, -1));
        cout << func(0, k, a, dp) << endl;
        t--;
    }

    return 0;
}