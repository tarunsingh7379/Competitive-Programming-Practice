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
        ll sum1 = 0;
        for (ll i = 0; i < n; i++)
        {
            sum1 = sum1 + a[i];
        }
        ll sum2 = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] <= k)
            {
                sum2 = sum2 + a[i];
            }
            else
            {
                sum2 = sum2 + k;
            }
        }
        ll ans = sum1 - sum2;
        cout << ans << endl;
        t--;
    }

    return 0;
}