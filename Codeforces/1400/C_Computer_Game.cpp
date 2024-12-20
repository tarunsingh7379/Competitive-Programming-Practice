#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(ll x, ll k, ll n, ll a, ll b)
{
    k -= x * a;
    if (k < 0)
        return false;
    n -= x;
    k -= n * b;
    return (k > 0);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll k, n, a, b;
        cin >> k >> n >> a >> b;
        ll l = 0, r = n;
        ll ans = -1;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (check(mid, k, n, a, b))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}