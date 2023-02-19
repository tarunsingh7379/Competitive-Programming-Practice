#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll solve(ll k, ll c1, ll c2, ll s, ll w, ll cost_s, ll cost_w)
{
    ll ans = 0;
    c1 -= k * cost_s;
    if (c1 < 0)
    {
        return 0;
    }
    ans += k;
    s -= k;
    ans += min(w, c1 / cost_w);
    w -= min(w, c1 / cost_w);
    if (cost_s > cost_w)
    {
        swap(cost_s, cost_w);
        swap(s, w);
    }
    ans += min(s, c2 / cost_s);
    c2 -= min(s, c2 / cost_s) * cost_s;
    ans += min(w, c2 / cost_w);
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
        ll c1, c2;
        cin >> c1 >> c2;
        ll s, w;
        cin >> s >> w;
        ll cost_s, cost_w;
        cin >> cost_s >> cost_w;
        ll ans = 0;
        for (ll i = 0; i <= s; i++)
        {
            ans = max(ans, solve(i, c1, c2, s, w, cost_s, cost_w));
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}