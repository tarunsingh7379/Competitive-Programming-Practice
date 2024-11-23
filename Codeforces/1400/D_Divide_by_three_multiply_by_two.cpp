#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool cmp(pair<ll, ll> &a, pair<ll, ll> &b)
{
    if (a.first == b.first)
    {
        return a.second < b.second;
    }
    return a.first >= b.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<pair<ll, ll>> ans;
    for (ll i = 0; i < n; i++)
    {
        ll x = a[i];
        ll cnt = 0;
        while (x % 3 == 0)
        {
            x /= 3;
            cnt++;
        }
        ans.push_back({cnt, a[i]});
    }
    sort(ans.begin(), ans.end(), cmp);
    for (auto num : ans)
    {
        cout << num.second << " ";
    }
    cout << endl;

    return 0;
}