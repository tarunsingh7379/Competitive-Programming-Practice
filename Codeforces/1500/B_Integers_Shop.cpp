#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n;
        cin >> n;
        ll left = 1e10, lcost = 0;
        ll right = 0, rcost = 0;
        ll mx = 0;
        ll cost = 1e15;
        for (ll i = 0; i < n; i++)
        {
            ll l, r, c;
            cin >> l >> r >> c;
            if (l < left)
            {
                left = l;
                lcost = c;
            }
            if (l == left)
            {
                lcost = min(lcost, c);
            }
            if (r > right)
            {
                right = r;
                rcost = c;
            }
            if (r == right)
            {
                rcost = min(rcost, c);
            }
            ll sz = r - l + 1;
            if (sz > mx)
            {
                mx = sz;
                cost = c;
            }
            if (sz == mx)
            {
                cost = min(cost, c);
            }
            if (mx == (right - left + 1))
            {
                cout << min(cost, lcost + rcost) << endl;
            }
            else
            {
                cout << lcost + rcost << endl;
            }
        }
        t--;
    }

    return 0;
}