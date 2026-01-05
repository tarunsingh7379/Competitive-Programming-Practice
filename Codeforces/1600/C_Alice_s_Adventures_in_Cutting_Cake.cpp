#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll get_ind(ll val, ll ind, vector<ll> &v)
{
    ll ans = -1;
    ll l = ind, r = v.size() - 1;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (v[mid] >= val)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
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
        ll n, m, k;
        cin >> n >> m >> k;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> prefix(n, 0), suffix(n, 0);
        ll cnt = 0, sum = 0;
        for (ll i = 0; i < n; i++)
        {
            sum += a[i];
            if (sum >= k)
            {
                cnt++;
                sum = 0;
            }
            prefix[i] = cnt;
        }
        cnt = 0;
        sum = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            sum += a[i];
            if (sum >= k)
            {
                cnt++;
                sum = 0;
            }
            suffix[i] = cnt;
        }
        vector<ll> prefix_sum(n, 0);
        prefix_sum[0] = a[0];
        for (ll i = 1; i < n; i++)
        {
            prefix_sum[i] = prefix_sum[i - 1] + a[i];
        }
        ll ans = -1;
        for (ll i = 0; i < n; i++)
        {
            ll left = 0;
            if (i - 1 >= 0)
            {
                left = prefix[i - 1];
            }
            ll rem = m - left;
            if (rem <= 0)
            {
                ll temp = prefix_sum[n - 1];
                if (i - 1 >= 0)
                {
                    temp -= prefix_sum[i - 1];
                }
                ans = max(ans, temp);
            }
            else
            {
                ll ind = get_ind(rem, i + 1, suffix);
                if (ind != -1)
                {
                    ll temp = prefix_sum[ind - 1];
                    if (i - 1 >= 0)
                    {
                        temp -= prefix_sum[i - 1];
                    }
                    ans = max(ans, temp);
                }
            }
        }
        if (prefix[n - 1] >= m)
        {
            ans = max(ans, 0LL);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}