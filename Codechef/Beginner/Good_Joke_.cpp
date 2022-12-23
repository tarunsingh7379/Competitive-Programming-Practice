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
        for (ll i = 0; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;
        }
        ll ans = 0;
        for (ll i = 1; i <= n; i++)
        {
            ans = ans ^ i;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}