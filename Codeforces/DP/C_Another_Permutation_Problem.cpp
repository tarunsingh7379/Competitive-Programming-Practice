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
        ll n;
        cin >> n;
        ll ans = 0;
        for (ll k = 1; k <= n; k++)
        {
            vector<ll> v;
            for (ll i = 1; i < k; i++)
            {
                v.push_back(i);
            }
            for (ll i = n; i >= k; i--)
            {
                v.push_back(i);
            }
            ll ma = 0, cur_sum = 0, cur = 0;
            for (ll i = 0; i < n; i++)
            {
                cur = (v[i] * (i + 1));
                cur_sum += cur;
                ma = max(ma, cur);
            }
            ans = max(ans, cur_sum - ma);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}