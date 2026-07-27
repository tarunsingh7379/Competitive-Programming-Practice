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
        ll a[n], b[m];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < m; i++)
        {
            cin >> b[i];
            b[i]--;
        }
        sort(b, b + m);
        ll ans = 0, cur = 0, ind = 0;
        for (ll i = 0; i < m; i++)
        {
            cur = 0;
            for (ll j = ind; j <= b[i]; j++)
            {
                cur += a[j];
            }
            ans += abs(cur);
            ind = b[i] + 1;
        }
        for (ll j = ind; j < n; j++)
        {
            ans += a[j];
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}