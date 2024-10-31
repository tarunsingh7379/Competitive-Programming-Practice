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
        vector<ll> a(n);
        ll sum = 0;
        ll ma = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            ma = max(ma, a[i]);
        }
        ll ans = max(((sum + k - 1) / k), ma);
        cout << ans << endl;
        t--;
    }

    return 0;
}