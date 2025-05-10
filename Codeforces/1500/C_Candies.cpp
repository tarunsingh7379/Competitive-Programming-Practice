#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(ll k, ll n)
{
    ll req = (n + 1) / 2;
    ll sum = 0;
    while (n)
    {
        ll cur = min(n, k);
        sum += cur;
        n -= cur;
        n -= (n / 10);
    }
    return sum >= req;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    ll l = 1, r = n;
    ll ans = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (check(mid, n))
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