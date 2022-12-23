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
        ll a, b, p, q;
        cin >> a >> b >> p >> q;
        if (p % a == 0 && q % b == 0)
        {
            ll x = p / a;
            ll y = q / b;

            if (abs(x - y) <= 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }

    return 0;
}