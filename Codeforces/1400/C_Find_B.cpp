#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n, q;
        cin >> n >> q;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> prefix_sum(n, 0), prefix_cnt(n, 0);
        prefix_sum[0] = a[0];
        prefix_cnt[0] = (a[0] == 1);
        for (ll i = 1; i < n; i++)
        {
            prefix_sum[i] = prefix_sum[i - 1] + a[i];
            prefix_cnt[i] = prefix_cnt[i - 1] + (a[i] == 1);
        }
        while (q--)
        {
            ll l, r;
            cin >> l >> r;
            l--;
            r--;
            ll sum = prefix_sum[r];
            ll cnt = prefix_cnt[r];
            if (l > 0)
            {
                sum -= prefix_sum[l - 1];
                cnt -= prefix_cnt[l - 1];
            }
            sum -= (r - l + 1);
            cout << ((sum >= cnt && (r - l + 1 > 1)) ? "YES" : "NO") << endl;
        }
        t--;
    }

    return 0;
}