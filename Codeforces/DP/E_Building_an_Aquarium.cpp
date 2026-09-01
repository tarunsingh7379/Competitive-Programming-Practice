#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(ll mid, vector<ll> &a, ll n, ll k)
{
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        cnt = cnt + max(0LL, mid - a[i]);
    }
    return cnt <= k;
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
        ll l = 1, r = 1e10;
        ll ans = 1;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (check(mid, a, n, k))
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