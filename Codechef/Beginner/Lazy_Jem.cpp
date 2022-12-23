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
        ll n, b, m;
        cin >> n >> b >> m;
        ll ans = 0;
        while (n > 1)
        {
            ll x = (n + 1) / 2;
            ans = ans + x * m + b;
            m = 2 * m;
            n = n - (n + 1) / 2;
        }
        ans = ans + m;
        cout << ans << endl;
        t--;
    }

    return 0;
}