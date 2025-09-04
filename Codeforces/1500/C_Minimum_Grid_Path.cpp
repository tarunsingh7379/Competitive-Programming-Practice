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
        ll min1 = 1e15, min2 = 1e15;
        ll rem1 = n, rem2 = n;
        ll ans = 1e15, sum = 0;
        for (ll i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                min1 = min(min1, a[i]);
                rem1--;
            }
            else
            {
                min2 = min(min2, a[i]);
                rem2--;
            }
            sum += a[i];
            if (i > 0)
            {
                ans = min(ans, sum + min1 * rem1 + min2 * rem2);
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}