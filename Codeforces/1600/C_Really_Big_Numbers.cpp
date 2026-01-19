#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(ll num, ll k)
{
    ll x = num, sum = 0;
    while (x)
    {
        sum += (x % 10);
        x /= 10;
    }
    return (num - sum >= k);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    ll l = 1, r = n;
    ll ans = -1;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (check(mid, k))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    if (ans == -1)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << (n - ans + 1) << endl;
    }

    return 0;
}