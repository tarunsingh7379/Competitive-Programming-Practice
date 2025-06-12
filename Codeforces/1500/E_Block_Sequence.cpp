#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(ll ind, vector<ll> &a, vector<ll> &dp)
{
    if (ind == a.size())
    {
        return 0;
    }
    if (ind > a.size())
    {
        return 1e7;
    }
    if (dp[ind] != -1)
    {
        return dp[ind];
    }
    ll ans = 1e8;
    ans = min(ans, func(ind + a[ind] + 1, a, dp));
    ans = min(ans, 1 + func(ind + 1, a, dp));
    return dp[ind] = ans;
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
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> dp(n, -1);
        cout << func(0, a, dp) << endl;
        t--;
    }

    return 0;
}