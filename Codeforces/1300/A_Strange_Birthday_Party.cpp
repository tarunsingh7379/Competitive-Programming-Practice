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
        ll n, m;
        cin >> n >> m;
        ll k[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> k[i];
        }
        ll c[m];
        for (ll i = 0; i < m; i++)
        {
            cin >> c[i];
        }
        sort(k, k + n);
        reverse(k, k + n);
        ll cost = 0;
        for (auto num : k)
        {
            cost = cost + c[num - 1];
        }
        ll ans = cost;
        for (ll i = 0; i < min(n, m); i++)
        {
            cost -= c[k[i] - 1];
            cost += c[i];
            ans = min(ans, cost);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}