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
        ll p = 1;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            p *= x;
        }
        ll ans = (p + n - 1) * 2022;
        cout << ans << endl;
        t--;
    }

    return 0;
}