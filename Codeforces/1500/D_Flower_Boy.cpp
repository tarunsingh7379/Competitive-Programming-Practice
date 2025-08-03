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
        }
        vector<ll> left(m, n), right(m, -1);
        ll j = 0;
        for (ll i = 0; i < m; i++)
        {
            while (j < n && a[j] < b[i])
            {
                j++;
            }
            left[i] = j++;
        }
        j = n - 1;
        for (ll i = m - 1; i >= 0; i--)
        {
            while (j >= 0 && a[j] < b[i])
            {
                j--;
            }
            right[i] = j--;
        }
        if (left[m - 1] < n)
        {
            cout << 0 << endl;
        }
        else
        {
            ll ans = 1e10;
            for (ll i = 0; i < m; i++)
            {
                ll x = -1;
                if (i - 1 >= 0)
                {
                    x = left[i - 1];
                }
                ll y = n;
                if (i + 1 < m)
                {
                    y = right[i + 1];
                }
                if (x < y)
                {
                    ans = min(ans, b[i]);
                }
            }
            if (ans == 1e10)
            {
                ans = -1;
            }
            cout << ans << endl;
        }
        t--;
    }

    return 0;
}