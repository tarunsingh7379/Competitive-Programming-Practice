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
        ll n, k;
        cin >> n >> k;
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
            v.push_back({num.first, num.second});
        }
        bool ok = false;
        while (!v.empty())
        {
            ll sz = v.size();
            if (v.back().second % 2 == 0)
            {
                ok = true;
                break;
            }
            if (sz - 2 < 0)
            {
                break;
            }
            if (v[sz - 1].first - v[sz - 2].first <= k)
            {
                ok = true;
                break;
            }
            v.pop_back();
        }
        cout << (ok ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}