#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> v;
    for (ll i = 0; i < n; i++)
    {
        ll x, y, p;
        cin >> x >> y >> p;
        v.push_back({x * x + y * y, p});
    }
    sort(v.begin(), v.end());
    double ans = -1;
    for (auto num : v)
    {
        k += num.second;
        if (k >= 1e6)
        {
            ans = num.first;
            break;
        }
    }
    if (ans == -1)
    {
        cout << ans << endl;
    }
    else
    {
        ans = sqrtl(ans);
        cout << fixed << setprecision(12) << ans << endl;
    }
    return 0;
}