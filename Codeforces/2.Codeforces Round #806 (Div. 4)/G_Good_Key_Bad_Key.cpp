#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(ll ind, ll cnt, ll k, vector<ll> &a, vector<vector<ll>> &dp)
{
    if (ind >= a.size())
    {
        return 0;
    }
    if (dp[ind][cnt] != -1)
    {
        return dp[ind][cnt];
    }
    ll curr = a[ind];
    ll i = 0;
    while (i < cnt)
    {
        curr /= 2;
        i++;
    }
    if (cnt == 30)
    {
        ll badKey = curr / 2 + func(ind + 1, cnt, k, a, dp);
        return dp[ind][cnt] = badKey;
    }
    ll goodKey = curr - k + func(ind + 1, cnt, k, a, dp);
    ll badKey = curr / 2 + func(ind + 1, cnt + 1, k, a, dp);
    return dp[ind][cnt] = max(goodKey, badKey);
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
        vector<vector<ll>> dp(n, vector<ll>(31, -1));
        ll ans = func(0, 0, k, a, dp);
        cout << ans << endl;
        t--;
    }

    return 0;
}