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
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll b;
        cin >> b;
        a[0] = min(a[0], b - a[0]);
        bool ok = true;
        for (ll i = 1; i < n; i++)
        {
            ll ma = max(a[i], b - a[i]);
            ll mi = min(a[i], b - a[i]);
            if (mi >= a[i - 1])
            {
                a[i] = mi;
            }
            else if (ma >= a[i - 1])
            {
                a[i] = ma;
            }
            else
            {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}