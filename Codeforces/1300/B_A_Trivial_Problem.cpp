#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll check(ll k)
{
    ll ans = 0;
    ll x = 1;
    for (ll i = 1;; i++)
    {
        x *= 5;
        ans += k / x;
        if (x > k)
        {
            break;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    ll l = 5, r = 5 * n;
    ll ans = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (check(mid) >= n)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    int x = check(ans);
    if (x != n)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 5 << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << ans + i << " ";
        }
        cout << endl;
    }
    return 0;
}