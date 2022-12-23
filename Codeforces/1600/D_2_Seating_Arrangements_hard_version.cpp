#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

struct Point
{
    ll x, y, val;
};

struct cmp
{
    bool operator()(Point &a, Point &b)
    {
        if (a.x == b.x)
        {
            return a.y < b.y;
        }
        return a.x > b.x;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        int n, m;
        cin >> n >> m;
        vector<ll> a(n * m);
        for (ll i = 0; i < n * m; i++)
        {
            cin >> a[i];
        }
        vector<ll> b = a;
        sort(b.begin(), b.end());
        ll grid[n][m], ind = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                grid[i][j] = b[ind++];
            }
        }
        map<ll, priority_queue<Point, vector<Point>, cmp>> mp;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                Point p;
                p.x = i;
                p.y = j;
                p.val = grid[i][j];
                mp[grid[i][j]].push(p);
            }
        }
        ll ans = 0;
        vector<vector<ll>> used(n, vector<ll>(m, 0));
        for (ll i = 0; i < n * m; i++)
        {
            Point p = mp[a[i]].top();
            mp[a[i]].pop();
            for (ll j = 0; j < p.y; j++)
            {
                if (used[p.x][j])
                {
                    ans++;
                }
            }
            used[p.x][p.y] = 1;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}