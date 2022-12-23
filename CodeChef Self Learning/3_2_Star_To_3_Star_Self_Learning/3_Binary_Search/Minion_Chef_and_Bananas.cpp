#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll check(ll x, vector<ll> &a)
{
    ll cost = 0;
    for (ll i = 0; i < a.size(); i++)
    {
        cost += (a[i] + (x - 1)) / x;
    }
    return cost;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n, h;
        cin >> n >> h;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = 1e10;
        ll l = 1, r = 1e9;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (check(mid, a) <= h)
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
        t--;
    }

    return 0;
}