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
        ll l, r, d;
        cin >> l >> r >> d;
        if (d < l)
        {
            cout << d << endl;
        }
        else
        {
            ll x = r / d;
            if (x > 0 && x * d > r)
            {
                cout << x * d << endl;
            }
            else
            {
                cout << (x + 1) * d << endl;
            }
        }
        t--;
    }

    return 0;
}