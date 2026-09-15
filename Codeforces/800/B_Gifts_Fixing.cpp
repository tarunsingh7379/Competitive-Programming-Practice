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
        ll a[n], b[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        ll mi_a = a[0], mi_b = b[0];
        for (ll i = 0; i < n; i++)
        {
            mi_a = min(mi_a, a[i]);
            mi_b = min(mi_b, b[i]);
        }
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ll cost1 = a[i] - mi_a;
            ll cost2 = b[i] - mi_b;
            ans += max(cost1, cost2);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}