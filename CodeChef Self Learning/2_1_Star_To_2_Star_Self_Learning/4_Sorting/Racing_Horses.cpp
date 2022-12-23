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
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        ll ans = 1e10;
        for (ll i = 0; i < n - 1; i++)
        {
            ans = min(ans, a[i + 1] - a[i]);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}