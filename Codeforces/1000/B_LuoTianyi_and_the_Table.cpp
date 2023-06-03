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
        ll a[n * m];
        for (ll i = 0; i < n * m; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n * m);
        ll ans = max(n * (m - 1) * (a[n * m - 1] - a[0]) + (n - 1) * (a[n * m - 1] - a[1]), (n - 1) * m * (a[n * m - 1] - a[0]) + (m - 1) * (a[n * m - 1] - a[1]));
        ans = max(ans, n * (m - 1) * (a[n * m - 1] - a[0]) + (n - 1) * (a[n * m - 2] - a[0]));
        ans = max(ans, (n - 1) * m * (a[n * m - 1] - a[0]) + (m - 1) * (a[n * m - 2] - a[0]));
        cout << ans << endl;
        t--;
    }

    return 0;
}