#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n, m;
        cin >> n >> m;
        ll a[n][m];
        ll ma = -1;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> a[i][j];
                ma = max(ma, a[i][j]);
            }
        }
        ll ans = 0;
        queue<pair<pair<ll, ll>, ll>> q;
        map<pair<ll, ll>, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                if (a[i][j] == ma)
                {
                    q.push({{i, j}, 0});
                    mp[{i, j}] = 1;
                }
            }
        }
        ll dx[] = {0, 0, 1, -1, -1, -1, 1, 1};
        ll dy[] = {-1, 1, 0, 0, -1, 1, -1, 1};
        while (!q.empty())
        {
            ll x = q.front().first.first;
            ll y = q.front().first.second;
            ll cost = q.front().second;
            ans = max(ans, cost);
            q.pop();
            for (ll i = 0; i < 8; i++)
            {
                ll new_x = x + dx[i];
                ll new_y = y + dy[i];

                if (new_x >= 0 && new_x < n && new_y >= 0 && new_y < m)
                {
                    if (a[new_x][new_y] < ma && mp[{new_x, new_y}] == 0)
                    {
                        q.push({{new_x, new_y}, cost + 1});
                        mp[{new_x, new_y}] = 1;
                    }
                }
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}