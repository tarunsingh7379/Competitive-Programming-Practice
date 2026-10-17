#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(ll k, ll n, ll a, ll b, ll c)
{
    ll x = k / 3;
    ll cur = x * (a + b + c);
    ll rem = k % 3;
    if (rem >= 1)
        cur += a;
    if (rem >= 2)
        cur += b;
    return cur >= n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        ll l = 0, r = 1e9;
        ll ans = 0;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (check(mid, n, a, b, c))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}