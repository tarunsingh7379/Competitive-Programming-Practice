#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

double dist(ll x1, ll y1, ll x2, ll y2)
{
    double ans = 0.0;
    ans = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll r;
        cin >> r;
        vector<pair<ll, ll>> v;
        for (ll i = 0; i < 3; i++)
        {
            ll x, y;
            cin >> x >> y;
            v.push_back({x, y});
        }

        vector<double> d;
        d.push_back(dist(v[0].first, v[0].second, v[1].first, v[1].second));
        d.push_back(dist(v[0].first, v[0].second, v[2].first, v[2].second));
        d.push_back(dist(v[1].first, v[1].second, v[2].first, v[2].second));

        if (d[0] <= r && d[1] <= r)
        {
            cout << "yes" << endl;
        }
        else if ((d[0] <= r || d[1] <= r) && (d[2] <= r))
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
        t--;
    }

    return 0;
}