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
        ll x = n;
        map<ll, ll> mp;
        for (ll i = 2; i * i <= n; i++)
        {
            if (x % i == 0)
            {
                ll cnt = 0;
                while (x % i == 0)
                {
                    cnt++;
                    x /= i;
                }
                mp[i] = cnt;
            }
        }
        if (x != 1)
        {
            mp[x] = 1;
        }
        vector<pair<ll, ll>> v;
        for (auto num : mp)
        {
            v.push_back({num.first, num.second});
        }
        ll ans = 0;
        while (1)
        {
            ll p = 1;
            for (ll i = 0; i < v.size(); i++)
            {
                if (v[i].second > 0)
                {
                    p *= v[i].first;
                    v[i].second--;
                }
            }
            if (p == 1)
            {
                break;
            }
            ans += p;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}