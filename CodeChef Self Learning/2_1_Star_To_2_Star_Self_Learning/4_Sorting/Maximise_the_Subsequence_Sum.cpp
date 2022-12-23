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
        sort(a, a + n);
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] >= 0)
            {
                ans += a[i];
            }
            else
            {
                if (k > 0)
                {
                    a[i] = -a[i];
                    ans += a[i];
                    k--;
                }
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}