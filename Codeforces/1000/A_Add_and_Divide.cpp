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
        ll a, b;
        cin >> a >> b;
        ll ans = INT_MAX;
        for (ll i = 0; i <= 1000; i++)
        {
            ll cnt = 0;
            ll x = a;
            if (b == 1 && i == 0)
            {
                continue;
            }
            while (x)
            {
                cnt++;
                x /= (b + i);
            }
            ans = min(ans, cnt + i);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}