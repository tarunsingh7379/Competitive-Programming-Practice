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
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        ll ans = a[k - 1] - a[0];
        for (ll i = k; i < n; i++)
        {
            ans = min(ans, a[i] - a[i - k + 1]);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}