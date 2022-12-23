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
        ll n, p, x, y;
        cin >> n >> p >> x >> y;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = 0;
        for (ll i = 0; i < p; i++)
        {
            if (a[i] == 0)
            {
                ans += x;
            }
            else
            {
                ans += y;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}