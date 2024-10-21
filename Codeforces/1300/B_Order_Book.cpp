#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    map<ll, ll> mp_s, mp_b;
    for (ll i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        ll p, q;
        cin >> p >> q;
        if (c == 'S')
        {
            mp_s[p] += q;
        }
        else
        {
            mp_b[p] += q;
        }
    }
    vector<pair<ll, ll>> v1, v2;
    for (auto num : mp_s)
    {
        v1.push_back({num.first, num.second});
    }
    for (auto num : mp_b)
    {
        v2.push_back({num.first, num.second});
    }
    sort(v1.rbegin(), v1.rend());
    sort(v2.rbegin(), v2.rend());
    for (int i = max(0LL, (ll)v1.size() - k); i < v1.size(); i++)
    {
        cout << "S " << v1[i].first << " " << v1[i].second << endl;
    }
    for (int i = 0; i < min(k, (ll)v2.size()); i++)
    {
        cout << "B " << v2[i].first << " " << v2[i].second << endl;
    }
    return 0;
}