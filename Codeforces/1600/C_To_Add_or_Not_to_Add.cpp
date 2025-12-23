#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll get_max_ind(ll ind, ll k, vector<ll> &a, vector<ll> &prefix_sum)
{
    ll l = ind, r = a.size() - 1;
    ll ans = -1;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        ll sum = prefix_sum[mid];
        if (ind - 1 >= 0)
        {
            sum -= prefix_sum[ind - 1];
        }
        ll req_sum = (mid - ind + 1) * a[ind];
        ll diff = req_sum - sum;
        if (diff <= k)
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

    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    vector<ll> prefix_sum(n, 0);
    prefix_sum[0] = a[0];
    for (ll i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + a[i];
    }
    ll ans = 0, num = 0;
    for (ll i = 0; i < n; i++)
    {
        ll max_ind = get_max_ind(i, k, a, prefix_sum);
        if (max_ind != -1)
        {
            ll cnt = max_ind - i + 1;
            if (cnt > ans)
            {
                ans = cnt;
                num = a[i];
            }
            else if (cnt == ans)
            {
                num = min(num, a[i]);
            }
        }
    }
    cout << ans << " " << num << endl;

    return 0;
}