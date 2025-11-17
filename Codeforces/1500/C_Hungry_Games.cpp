#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll get_ind(ll i, ll k, vector<ll> &prefix)
{
    ll ans = -1;
    ll l = i, r = prefix.size() - 1;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        ll sum = prefix[mid];
        if (i - 1 >= 0)
        {
            sum -= prefix[i - 1];
        }
        if (sum > k)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
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
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> prefix(n, 0);
        prefix[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + a[i];
        }
        vector<ll> dp(n + 1, 0);
        for (ll i = n - 1; i >= 0; i--)
        {
            ll ind = get_ind(i, k, prefix);
            if (ind != -1)
            {
                dp[i] = (ind - i) + dp[ind + 1];
            }
            else
            {
                dp[i] = (n - i);
            }
        }
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ans += dp[i];
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}