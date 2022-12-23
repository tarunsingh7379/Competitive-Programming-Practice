#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(ll x, vector<ll> &v)
{
    ll sz = v.size();
    ll rem = x - sz;
    for (ll i = 0; i < sz; i++)
    {
        ll total = x - i;
        if (v[i] - total > 0)
        {
            ll d = v[i] - total;
            rem -= d;
            if (rem < 0)
            {
                return false;
            }
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
        ll freq[n + 1] = {0};
        for (ll i = 0; i < n - 1; i++)
        {
            ll x;
            cin >> x;
            freq[x]++;
        }
        vector<ll> v;
        v.push_back(1);
        for (ll i = 0; i <= n; i++)
        {
            if (freq[i] > 0)
            {
                v.push_back(freq[i]);
            }
        }
        sort(v.rbegin(), v.rend());
        ll ans = 0;
        ll l = 0, r = n + 1;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (check(mid, v))
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