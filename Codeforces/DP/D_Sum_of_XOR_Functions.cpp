#include <bits/stdc++.h>
typedef long long int ll;
#define M 998244353
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll a[n + 1];
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    for (ll i = 0; i < 30; i++)
    {
        ll prev_x = 0;
        vector<ll> cnt(2, 0), sum(2, 0);
        cnt[0] = 1;
        for (ll j = 1; j <= n; j++)
        {
            ll cur_x = prev_x ^ (a[j] >> i & 1);
            ll required_left_cnt = cnt[cur_x ^ 1];
            ll required_left_sum = sum[cur_x ^ 1];
            ll cur_contribution = (required_left_cnt * j - required_left_sum + M) % M;
            ans = (ans + (cur_contribution * (1LL << i)) % M) % M;
            cnt[cur_x]++;
            sum[cur_x] = sum[cur_x] + j;
            prev_x = cur_x;
        }
    }
    cout << ans << endl;

    return 0;
}