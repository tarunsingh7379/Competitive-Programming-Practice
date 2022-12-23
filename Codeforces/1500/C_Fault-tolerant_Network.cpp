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
        ll ans = min(abs(a[0] - b[0]) + abs(a[n - 1] - b[n - 1]), abs(a[0] - b[n - 1]) + abs(a[n - 1] - b[0]));
        ll x = abs(a[0] - b[0]) + abs(a[n - 1] - b[0]);
        ll sm = 1e10;
        for (ll i = 0; i < n; i++)
        {
            sm = min(sm, abs(a[i] - b[n - 1]));
        }
        x += sm;
        ans = min(ans, x);
        x = abs(a[0] - b[n - 1]) + abs(a[n - 1] - b[n - 1]);
        sm = 1e10;
        for (ll i = 0; i < n; i++)
        {
            sm = min(sm, abs(a[i] - b[0]));
        }
        x += sm;
        ans = min(ans, x);
        x = abs(a[0] - b[0]) + abs(a[0] - b[n - 1]);
        sm = 1e10;
        for (ll i = 0; i < n; i++)
        {
            sm = min(sm, abs(b[i] - a[n - 1]));
        }
        x += sm;
        ans = min(ans, x);
        x = abs(a[n - 1] - b[0]) + abs(a[n - 1] - b[n - 1]);
        sm = 1e10;
        for (ll i = 0; i < n; i++)
        {
            sm = min(sm, abs(b[i] - a[0]));
        }
        x += sm;
        ans = min(ans, x);
        x = abs(a[0] - b[0]);
        ll p = 1e10, q, r, s;
        q = p;
        r = p;
        s = p;
        for (ll i = 0; i < n; i++)
        {
            p = min(p, abs(a[n - 1] - b[i]));
            q = min(q, abs(b[n - 1] - a[i]));
        }
        ans = min(ans, x + p + q);
        p = 1e10;
        q = 1e10;
        x = abs(a[0] - b[n - 1]);
        for (ll i = 0; i < n; i++)
        {
            p = min(p, abs(a[n - 1] - b[i]));
            q = min(q, abs(b[0] - a[i]));
        }
        ans = min(ans, x + p + q);
        p = 1e10;
        q = 1e10;
        x = abs(a[n - 1] - b[n - 1]);
        for (ll i = 0; i < n; i++)
        {
            p = min(p, abs(a[0] - b[i]));
            q = min(q, abs(b[0] - a[i]));
        }
        ans = min(ans, x + p + q);
        p = 1e10;
        q = 1e10;
        x = abs(a[n - 1] - b[0]);
        for (ll i = 0; i < n; i++)
        {
            p = min(p, abs(a[0] - b[i]));
            q = min(q, abs(b[n - 1] - a[i]));
        }
        ans = min(ans, x + p + q);
        p = 1e10;
        q = 1e10;
        r = 1e10;
        s = 1e10;
        for (ll i = 0; i < n; i++)
        {
            p = min(p, abs(a[0] - b[i]));
            q = min(q, abs(a[n - 1] - b[i]));
            r = min(r, abs(b[0] - a[i]));
            s = min(s, abs(b[n - 1] - a[i]));
        }
        ans = min(ans, p + q + r + s);
        cout << ans << endl;
        t--;
    }

    return 0;
}