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
        vector<ll> a(n), b(n), c(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        ll cnt1 = 0, cnt2 = 0;
        for (ll i = 0; i < n; i++)
        {
            bool ok = true;
            for (ll j = 0; j < n; j++)
            {
                if (b[j] <= a[(i + j) % n])
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
            {
                cnt1++;
            }
            ok = true;
            for (ll j = 0; j < n; j++)
            {
                if (c[(i + j) % n] <= b[j])
                {
                    ok = false;
                }
            }
            if (ok)
            {
                cnt2++;
            }
        }
        ll ans = cnt1 * cnt2 * n;
        cout << ans << endl;
        t--;
    }

    return 0;
}