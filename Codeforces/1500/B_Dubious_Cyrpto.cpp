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
        ll l, r, m;
        cin >> l >> r >> m;
        for (ll i = l; i <= r; i++)
        {
            ll rem = m % i;
            ll x = i - rem;
            if (l + x <= r)
            {
                cout << i << " " << l << " " << l + x << endl;
                break;
            }
            else if (l + rem <= r)
            {
                cout << i << " " << l + rem << " " << l << endl;
                break;
            }
        }

        t--;
    }

    return 0;
}