#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(ll val, ll k, map<ll, ll> &mp)
{
    if (val < k)
    {
        return 1e9;
    }
    if (val == k)
    {
        return 0;
    }
    if (mp.find(val) != mp.end())
        return mp[val];
    ll ans = 1e9;
    ans = min(ans, 1 + func(val / 2, k, mp));
    if (val % 2 != 0)
        ans = min(ans, 1 + func(val / 2 + 1, k, mp));
    return mp[val] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n, k;
        cin >> n >> k;
        map<ll, ll> mp;
        ll ans = func(n, k, mp);
        if (ans >= 1e9)
        {
            ans = -1;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}