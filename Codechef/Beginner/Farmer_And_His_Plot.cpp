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
        ll n, m;
        cin >> n >> m;
        ll ans = 0;
        ll total = n * m;
        for (ll i = min(n, m); i >= 1; i--)
        {
            ll side = i;
            ll area = i * i;
            if (n % side == 0 && m % side == 0)
            {
                ans = total / area;
                break;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}