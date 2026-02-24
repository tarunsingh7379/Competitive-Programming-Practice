#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(ll len, ll n, ll m)
{
    ll cnt1 = len / 2, cnt2 = len / 3;
    ll common = len / 6;
    cnt1 -= common;
    cnt2 -= common;
    if(cnt1 <= n)
        n -= cnt1;
    else
        n = 0;
    if(cnt2 <= m)
        m -= cnt2;
    else
        m = 0;
    return (n + m <= common);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    ll l = 1, r = 1e12;
    ll ans = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (check(mid, n, m))
        {
            r = mid - 1;
            ans = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << endl;

    return 0;
}