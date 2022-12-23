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
        ll left[n + 1] = {0}, right[n + 1] = {0};
        for (ll i = 1; i <= n; i++)
        {
            if (a[i - 1] == 1)
            {
                left[i] = i;
            }
            else
            {
                left[i] = left[i - 1];
            }
        }
        for (ll i = n - 1; i >= 0; i--)
        {
            if (a[i] == 2)
            {
                right[i] = i + 1;
            }
            else
            {
                right[i] = right[i + 1];
            }
        }
        // for (ll i = 0; i <= n; i++)
        // {
        //     cout << left[i] << " ";
        // }
        // cout << endl;
        // for (ll i = 0; i <= n; i++)
        // {
        //     cout << right[i] << " ";
        // }
        // cout << endl;
        while (m--)
        {
            ll x;
            cin >> x;
            ll ans = 1e17;
            if (left[x] != 0)
            {
                ans = x - left[x];
            }
            if (right[x - 1] != 0)
            {
                ans = min(ans, right[x - 1] - x);
            }
            if (x == 1)
            {
                ans = 0;
            }
            if (ans == 1e17)
            {
                ans = -1;
            }
            cout << ans << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}