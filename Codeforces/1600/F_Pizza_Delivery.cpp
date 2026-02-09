#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll dist(pair<ll, ll> a, pair<ll, ll> b)
{
    return abs(a.first - b.first) + abs(a.second - b.second);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n, ax, ay, bx, by;
        cin >> n >> ax >> ay >> bx >> by;
        vector<ll> vx, vy;
        for (ll i = 0; i < n; i++)
        {
            ll z;
            cin >> z;
            vx.push_back(z);
        }
        for (ll i = 0; i < n; i++)
        {
            ll z;
            cin >> z;
            vy.push_back(z);
        }
        vector<pair<ll, ll>> v;
        map<ll, vector<ll>> mp;
        for (ll i = 0; i < n; i++)
        {
            mp[vx[i]].push_back(vy[i]);
        }
        vector<pair<ll, ll>> low, high;
        low.push_back({ax, ay});
        high.push_back({ax, ay});
        for (auto it : mp)
        {
            ll x = it.first;
            auto it2 = it.second;
            ll mi = *min_element(it2.begin(), it2.end());
            ll ma = *max_element(it2.begin(), it2.end());
            low.push_back({x, mi});
            high.push_back({x, ma});
        }
        low.push_back({bx, by});
        high.push_back({bx, by});
        ll m = low.size();
        vector<vector<ll>> dp(m, vector<ll>(2, 1e17));
        dp[0][0] = dp[0][1] = 0;
        for (ll i = 1; i < m; i++)
        {
            dp[i][0] = min(dp[i - 1][0] + dist(low[i], high[i - 1]),
                           dp[i - 1][1] + dist(low[i], low[i - 1])) +
                       dist(low[i], high[i]);
            dp[i][1] = min(dp[i - 1][0] + dist(high[i], high[i - 1]),
                           dp[i - 1][1] + dist(high[i], low[i - 1])) +
                       dist(high[i], low[i]);
        }
        cout << min(dp[m - 1][0], dp[m - 1][1]) << endl;
        t--;
    }

    return 0;
}