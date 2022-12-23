#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool cmp(pair<ll, ll> &a, pair<ll, ll> &b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    else
    {
        return a.second > b.second;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v;
    ll a[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll b[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for (ll i = 0; i < n; i++)
    {
        v.push_back({a[i], b[i]});
    }
    sort(v.begin(), v.end(), cmp);
    for (auto num : v)
    {
        cout << num.first << " " << num.second << " ";
    }
    cout << endl;

    return 0;
}