#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0, rem = 0;
    ans = ans + a[0] / k;
    rem = a[0] % k;
    for (ll i = 1; i < n; i++)
    {
        a[i] += rem;
        if (rem > 0)
        {
            if (a[i] <= k)
            {
                ans++;
                rem = 0;
            }
            else
            {
                ans = ans + a[i] / k;
                rem = a[i] % k;
            }
        }
        else
        {
            if (a[i] < k)
            {
                rem = a[i];
            }
            else
            {
                ans = ans + a[i] / k;
                rem = a[i] % k;
            }
        }
    }
    if (rem)
    {
        ans++;
    }
    cout << ans << endl;
    return 0;
}