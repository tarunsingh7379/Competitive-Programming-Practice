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
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll total = 0, ans = 1e9;
        for (ll i = 1; i < n; i++)
        {
            total += abs(a[i] - a[i - 1]);
        }
        for (ll i = 0; i < n; i++)
        {
            ll cur = total;
            if (i - 1 >= 0)
            {
                cur -= abs(a[i] - a[i - 1]);
            }
            if (i + 1 < n)
            {
                cur -= abs(a[i + 1] - a[i]);
            }
            if (i - 1 >= 0 && i + 1 < n)
            {
                cur += abs(a[i + 1] - a[i - 1]);
            }
            ans = min(ans, cur);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}