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
        ll n, l, r;
        cin >> n >> l >> r;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = 0, sum = 0, L = 0, R = 0;
        while (L < n)
        {
            while (R < n && sum < l)
            {
                sum += a[R];
                R++;
            }
            if (sum >= l && sum <= r)
            {
                ans++;
                L = R;
                sum = 0;
            }
            else
            {
                sum -= a[L];
                L++;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}