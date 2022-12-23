#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(ll ind, vector<pair<ll, ll>> &a, vector<ll> &dp)
{
    if (ind >= a.size())
    {
        return 0;
    }
    if (dp[ind] != -1)
    {
        return dp[ind];
    }
    ll pick = a[ind].first * a[ind].second;
    if (ind + 1 < a.size() && a[ind + 1].first - a[ind].first > 1)
    {
        pick += func(ind + 1, a, dp);
    }
    else
    {
        pick += func(ind + 2, a, dp);
    }
    ll notPick = func(ind + 1, a, dp);
    return dp[ind] = max(pick, notPick);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mp[x]++;
    }
    vector<pair<ll, ll>> a;
    for (auto num : mp)
    {
        a.push_back({num.first, num.second});
    }
    vector<ll> dp(a.size(), -1);
    ll ans = func(0, a, dp);
    cout << ans << endl;
    return 0;
}