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
    vector<vector<ll>> v(n + 1);
    for (ll i = 0; i < 2 * n; i++)
    {
        ll x;
        cin >> x;
        v[x].push_back(i + 1);
    }
    ll a = 1, b = 1;
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll cost1 = abs(a - v[i][0]) + abs(b - v[i][1]);
        ll cost2 = abs(b - v[i][0]) + abs(a - v[i][1]);
        ans += min(cost1, cost2);
        a = v[i][0];
        b = v[i][1];
    }
    cout << ans << endl;

    return 0;
}