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
    ll len = 1;
    for (ll i = 1; i < n; i++)
    {
        len = 2 * len + 1;
    }

    ll l = 1, r = len;
    ll ans = n;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (mid == k)
        {
            ans = n;
            break;
        }
        else if (mid < k)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
        n--;
    }
    cout << ans << endl;
    return 0;
}