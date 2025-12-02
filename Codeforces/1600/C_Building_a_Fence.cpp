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
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool ok = true;
        ll l = a[0], r = a[0];
        for (ll i = 1; i < n; i++)
        {
            l = max(a[i], l - (k - 1));
            r = min(a[i] + (k - 1), r + (k - 1));
            if (l > r)
            {
                ok = false;
                break;
            }
        }
        if (!(l <= a[n - 1] && a[n - 1] <= r))
        {
            ok = false;
        }
        cout << (ok ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}