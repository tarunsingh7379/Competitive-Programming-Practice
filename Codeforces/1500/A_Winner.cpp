#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    string ans = "";
    map<string, ll> mp;
    vector<pair<string, ll>> v;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        ll score;
        cin >> score;
        v.push_back({s, score});
        mp[s] += score;
    }
    ll ma = INT_MIN;
    for (auto num : mp)
    {
        ma = max(ma, num.second);
    }
    map<string, ll> mp1;
    for (ll i = 0; i < n; i++)
    {
        mp1[v[i].first] += v[i].second;
        if (mp[v[i].first] >= ma && mp1[v[i].first] >= ma)
        {
            ans = v[i].first;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}