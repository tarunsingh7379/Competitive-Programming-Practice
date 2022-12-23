#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, t;
    cin >> n >> t;
    ll k;
    cin >> k;

    ll l = 1, r = n;
    ll ans = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        cout << "? " << 1 << " " << mid << endl;
        ll x;
        cin >> x;
        ll d = mid - x;
        if (d < k)
        {
            l = mid + 1;
        }
        else if (d == k)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << "! " << ans << endl;

    return 0;
}