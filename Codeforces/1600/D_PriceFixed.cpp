#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll check(ll x, ll sum, vector<pair<ll, ll>> &v)
{
    ll bought = sum - x;
    for (ll i = 0; i < v.size(); i++)
    {
        if (v[i].first <= bought)
        {
            x -= v[i].second;
            bought += v[i].second;
        }
        else
        {
            break;
        }
    }
    if (x <= 0)
    {
        return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        v[i] = {y, x};
        sum += v[i].second;
    }
    sort(v.begin(), v.end());
    ll l = 0, r = sum, ans = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (check(mid, sum, v))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    ans = ans + (sum - ans) * 2;
    cout << ans << endl;
    return 0;
}