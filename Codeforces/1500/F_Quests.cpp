#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll check(ll k, vector<ll> &a, ll d)
{
    ll ans = 0;
    for (ll i = 0; i < d; i++)
    {
        ll ind = i % k;
        if (ind < a.size())
        {
            ans += a[ind];
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n, c, d;
        cin >> n >> c >> d;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        reverse(a.begin(), a.end());
        ll l = 0, r = d + 2;
        ll ans = -1;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (check(mid + 1, a, d) >= c)
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (ans == d + 2)
        {
            cout << "Infinity" << endl;
        }
        else if (ans == -1)
        {
            cout << "Impossible" << endl;
        }
        else
        {
            cout << ans << endl;
        }
        t--;
    }

    return 0;
}