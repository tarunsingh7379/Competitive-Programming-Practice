#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(ll x, ll n, ll k)
{
    ll rem = n - x;
    ll sum = rem * (rem + 1) / 2 - x;
    return sum >= k;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;

    ll ans = 0;
    ll l = 0, r = n;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (check(mid, n, k))
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