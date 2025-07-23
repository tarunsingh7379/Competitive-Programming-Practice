#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, l, r, ql, qr;
    cin >> n >> l >> r >> ql >> qr;
    ll a[n];
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    ll left = 0, right = 0, ans = 1e18;
    for (ll i = 0; i <= n; i++)
    {
        if (i != 0)
            left += a[i - 1];
        right = sum - left;
        ll rem = n - i;
        ll cur = left * l + right * r;
        if (i > rem)
        {
            cur += (i - rem - 1) * ql;
        }
        if (rem > i)
        {
            cur += (rem - i - 1) * qr;
        }
        ans = min(ans, cur);
    }
    cout << ans << endl;
    return 0;
}