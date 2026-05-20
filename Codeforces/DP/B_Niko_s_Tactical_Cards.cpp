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
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> b(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        ll ma = 0, mi = 0;
        for (ll i = 0; i < n; i++)
        {

            ll cur_ma = max(ma - a[i], b[i] - mi);
            ll cur_mi = min(mi - a[i], b[i] - ma);
            ma = cur_ma;
            mi = cur_mi;
        }
        cout << ma << endl;
        t--;
    }

    return 0;
}