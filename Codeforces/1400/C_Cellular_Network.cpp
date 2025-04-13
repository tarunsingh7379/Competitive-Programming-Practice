#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(ll k, vector<ll> &a, vector<ll> &b)
{
    vector<pair<ll, ll>> v;
    for (auto num : b)
    {
        v.push_back({num - k, num + k});
    }
    sort(v.begin(), v.end());
    vector<pair<ll, ll>> temp;
    temp.push_back({v[0].first, v[0].second});
    for (int i = 1; i < v.size(); i++)
    {
        if (temp.back().second >= v[i].first)
        {
            temp[temp.size() - 1].second = max(temp[temp.size() - 1].second, v[i].second);
        }
        else
        {
            temp.push_back(v[i]);
        }
    }
    for (auto num : a)
    {
        ll l = 0, r = temp.size() - 1;
        ll ok = 0;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (num >= temp[mid].first && num <= temp[mid].second)
            {
                ok = 1;
                break;
            }
            if (num < temp[mid].first)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (!ok)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;

    set<ll> st1, st2;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        st1.insert(x);
    }
    for (int i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        st2.insert(x);
    }

    vector<ll> a(st1.begin(), st1.end()), b(st2.begin(), st2.end());

    ll l = 0, r = 1e12;
    ll ans = 1e12;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (check(mid, a, b))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << endl;

    return 0;
}