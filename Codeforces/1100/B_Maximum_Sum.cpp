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
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<ll, ll> mp;
        ll sum = 0, ma = 0;
        for (ll i = 0; i < n; i++)
        {
            sum += a[i];
            ma = max(ma, sum);
            if (!mp.empty())
            {
                ma = max(ma, sum - mp.begin()->first);
            }
            mp[sum]++;
        }
        ll ans = sum - ma;
        for (ll i = 0; i < k; i++)
        {
            ma = (ma + ma) % M;
        }
        ans = (ans % M + ma + M) % M;
        cout << ans << endl;
        t--;
    }

    return 0;
}