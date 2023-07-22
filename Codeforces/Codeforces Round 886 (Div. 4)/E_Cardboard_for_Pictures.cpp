#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll check(vector<ll> &a, ll w, ll k)
{
    ll val = 0;
    for (auto num : a)
    {
        val = val + 4 * w * w + 2 * w * 2 * num + num * num;
        if (val > k)
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
    int t;
    cin >> t;
    while (t)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll l = 1, r = 1e9;
        ll ans = -1;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (check(a, mid, k))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}