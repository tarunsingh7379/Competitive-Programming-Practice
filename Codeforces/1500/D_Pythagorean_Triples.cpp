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
        if (n <= 4)
        {
            cout << 0 << endl;
        }
        else
        {
            ll x = sqrtl(n * n - (n - 1) * (n - 1));
            if (x % 2 == 0)
            {
                x--;
            }
            ll ans = (x - 3) / 2 + 1;
            cout << ans << endl;
        }
        t--;
    }

    return 0;
}