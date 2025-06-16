#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(ll x, ll n, ll m, ll pos)
{
    ll used = x;
    ll left = 0, right = 0;
    ll mi = min(pos - 1, x - 1);
    left = (x - mi + x - 1) * mi / 2 + (pos - 1 - mi);
    mi = min(n - pos, x - 1);
    right = (x - mi + x - 1) * mi / 2 + (n - pos - mi);
    used += (left + right);
    return used <= m;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, k;
    cin >> n >> m >> k;
    ll l = 1, r = m;
    ll ans = 1;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (check(mid, n, m, k))
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

    return 0;
}