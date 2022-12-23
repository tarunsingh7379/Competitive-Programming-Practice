#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool cmp(pair<ll, ll> &a, pair<ll, ll> &b)
{
    if (a.first == b.first)
    {
        return a.second > b.second;
    }
    return a.first < b.first;
}

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
        vector<pair<ll, ll>> v;
        for (ll i = 0; i < m; i++)
        {
            ll x;
            cin >> x;
            v.push_back({x, i});
        }
        sort(v.begin(), v.end(), cmp);
        ll seat_pos[m] = {0};
        for (ll i = 0; i < v.size(); i++)
        {
            seat_pos[v[i].second] = i;
        }
        ll seat[m] = {0};
        ll ans = 0;
        for (ll i = 0; i < m; i++)
        {
            ll pos = seat_pos[i];
            for (ll j = 0; j < pos; j++)
            {
                if (seat[j] == 1)
                {
                    ans++;
                }
            }
            seat[pos] = 1;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}