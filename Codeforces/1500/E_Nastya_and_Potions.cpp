#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(ll ind, vector<ll> &cost, map<ll, vector<ll>> &mp, vector<ll> &dp)
{
    if (dp[ind] != -1)
    {
        return dp[ind];
    }
    ll ans = cost[ind];
    ll sum = 0;
    for (auto num : mp[ind])
    {
        sum += func(num, cost, mp, dp);
    }
    if (mp[ind].size() > 0)
        ans = min(ans, sum);
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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> dp(n, -1);
        for (ll i = 0; i < k; i++)
        {
            ll x;
            cin >> x;
            x--;
            dp[x] = 0;
        }
        vector<ll> ans;
        map<ll, vector<ll>> mp;
        for (ll i = 0; i < n; i++)
        {
            ll m;
            cin >> m;
            for (ll j = 0; j < m; j++)
            {
                ll x;
                cin >> x;
                x--;
                mp[i].push_back(x);
            }
        }
        for (ll i = 0; i < n; i++)
        {
            if (dp[i] == -1)
            {
                func(i, a, mp, dp);
            }
        }
        for (auto num : dp)
        {
            cout << num << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}