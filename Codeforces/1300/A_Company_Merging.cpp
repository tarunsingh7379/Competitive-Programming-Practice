#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<pair<ll, ll>> v;
    ll mm = 0;
    for (ll i = 0; i < n; i++)
    {
        ll m;
        cin >> m;
        ll ma = 0, x;
        for (ll j = 0; j < m; j++)
        {
            cin >> x;
            ma = max(ma, x);
        }
        v.push_back({ma, m});
        mm = max(mm, ma);
    }
    ll ans = 0;
    for (auto num : v)
    {
        ans += (mm - num.first) * (num.second);
    }
    cout << ans << endl;

    return 0;
}