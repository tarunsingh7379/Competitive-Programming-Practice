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
    vector<pair<ll, ll>> v;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back({x, i});
    }
    sort(v.begin(), v.end());
    vector<ll> ans(n, 0);
    ll last = 0;
    for (ll i = 0; i < n; i++)
    {
        if (last >= v[i].first)
        {
            last++;
        }
        else if (last < v[i].first)
        {
            last = v[i].first;
        }
        ans[v[i].second] = last;
    }
    for (auto num : ans)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}