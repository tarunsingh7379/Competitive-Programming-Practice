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
        ll n, p, k;
        cin >> n >> p >> k;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll ans = 0, sum = 0;
        for (ll i = 0; i < n; i += 2)
        {
            sum += a[i];
            if (sum <= p)
            {
                ans = i + 1;
            }
        }
        sum = 0;
        for (ll i = 1; i < n; i += 2)
        {
            sum += a[i];
            if (sum <= p)
            {
                ans = max(ans, i + 1);
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}