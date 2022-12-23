#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(ll x, vector<ll> &a)
{
    ll got = 0;
    ll n = a.size();
    for (ll i = n - x; i < n; i++)
    {
        got += a[i];
    }
    if (n - x - 1 >= 0)
    {
        ll z = a[n - x - 1];
        ll req = 0;
        for (ll i = 0; i < n - x - 1; i++)
        {
            req += (z - a[i]);
        }
        if (req <= got)
        {
            return true;
        }
        else
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
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll l = 0, r = n;
        ll ans = 0;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (check(mid, a))
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