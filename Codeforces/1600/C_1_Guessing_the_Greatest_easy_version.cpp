#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll l = 1, r = n;
    while (l < r)
    {
        cout << "? " << l << " " << r << endl;
        ll x;
        cin >> x;
        ll mid = (l + r) / 2;
        if (x <= mid)
        {
            if (l == mid)
            {
                l = mid + 1;
                continue;
            }
            cout << "? " << l << " " << mid << endl;
            ll left;
            cin >> left;
            if (left == x)
            {
                r = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        else
        {
            if (mid + 1 == r)
            {
                r = mid;
                continue;
            }
            cout << "? " << mid + 1 << " " << r << endl;
            ll right;
            cin >> right;
            if (right == x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid;
            }
        }
    }
    cout << "! " << l << endl;
    return 0;
}