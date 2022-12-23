#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll check(ll x, vector<pair<ll, ll>> &v, ll H, ll w)
{
    ll woods = 0;
    for (auto &num : v)
    {
        if (x >= (H - num.first + num.second - 1) / num.second)
        {
            woods += num.first;
            if (woods >= w)
            {
                return true;
            }
            woods += (x * num.second);
        }
        if (woods >= w)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, w, H;
    cin >> n >> w >> H;
    vector<pair<ll, ll>> v;
    for (ll i = 0; i < n; i++)
    {
        ll h, r;
        cin >> h >> r;
        v.push_back({h, r});
    }
    ll ans = 0;
    ll l = 0, r = 1e18;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (check(mid, v, H, w))
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