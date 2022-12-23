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
        ll a[12] = {0};
        for (ll i = 0; i < n; i++)
        {
            ll p, s;
            cin >> p >> s;
            a[p] = max(a[p], s);
        }
        ll ans = 0;
        for (ll i = 1; i <= 8; i++)
        {
            ans = ans + a[i];
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}