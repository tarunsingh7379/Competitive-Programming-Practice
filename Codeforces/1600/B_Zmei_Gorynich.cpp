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
        ll ans = INT_MAX;
        vector<pair<ll, ll>> v;
        ll ma = 0;
        for (ll i = 0; i < n; i++)
        {
            ll d, h;
            cin >> d >> h;
            v.push_back({d, h});
            ma = max(ma, d);
        }
        k -= ma;
        if (k > 0)
        {
            for (auto num : v)
            {
                ll d = num.first, h = num.second;
                ll x = d - h;
                if (x > 0)
                {
                    ans = min(ans, (k + x - 1) / x);
                }
            }
            ans++;
        }
        else
        {
            ans = 1;
        }

        if (ans >= INT_MAX)
        {
            ans = -1;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}