#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, h, k;
    cin >> n >> h >> k;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0, cur_h = 0, i = 0;
    while (i < n)
    {
        while (i < n && cur_h + a[i] <= h)
        {
            cur_h += a[i];
            i++;
        }
        if (i < n)
        {
            ll x = (cur_h - h + a[i] + k - 1) / k;
            ans = ans + x;
            cur_h = max(0LL, cur_h - x * k);
        }
    }
    ans = ans + cur_h / k + (cur_h % k ? 1 : 0);
    cout << ans << endl;

    return 0;
}