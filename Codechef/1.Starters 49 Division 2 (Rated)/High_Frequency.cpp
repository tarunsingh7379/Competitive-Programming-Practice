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
        ll n;
        cin >> n;
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            mp[x]++;
        }
        vector<pair<ll, ll>> v;
        for (auto num : mp)
        {
            v.push_back({num.second, num.first});
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        ll ans = 0;
        if (v.size() == 1)
        {
            ans = (v[0].first + 1) / 2;
        }
        else
        {
            ll d = v[0].first - v[1].first;
            if (d > v[1].first)
            {
                ans = (v[0].first + 1) / 2;
            }
            else
            {
                ans = v[1].first;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}