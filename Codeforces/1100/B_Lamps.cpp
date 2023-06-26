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
        ll n;
        cin >> n;
        vector<pair<ll, ll>> v;
        for (ll i = 0; i < n; i++)
        {
            ll a, b;
            cin >> a >> b;
            v.push_back({a, b});
        }
        sort(v.begin(), v.end(), cmp);
        ll ans = 0, cnt = 0, i = 0, flag = 0;
        map<ll, ll> mp;
        for (auto num : v)
        {
            mp[num.first]++;
        }
        while (i < n)
        {
            ans += v[i].second;
            cnt++;
            ll temp = cnt;
            i++;
            while (i < n && v[i].first == cnt)
            {
                i++;
                temp++;
            }
            temp -= mp[cnt];
            mp[cnt] = 0;
            cnt = temp;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}