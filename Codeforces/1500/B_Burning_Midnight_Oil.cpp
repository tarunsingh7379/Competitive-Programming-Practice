#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(ll x, ll n, ll k)
{
    ll cnt = 0;
    ll p = 1;
    while (x / p)
    {
        cnt = cnt + x / p;
        p = p * k;
    }
    return cnt >= n;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;

    ll l = 1, r = n, ans = n;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (check(mid, n, k))
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

    return 0;
}