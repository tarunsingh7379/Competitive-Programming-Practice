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
        ll n, b, h;
        cin >> n >> b >> h;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        double ans = n * b * h;
        for (ll i = 1; i < n; i++)
        {
            ll d = a[i - 1] + h - a[i];
            if (d > 0)
            {
                ans = ans - (b - 2 * (h - d)) * d;
            }
        }
        ans = ans / 2;
        cout << fixed << setprecision(12) << ans << endl;
        t--;
    }

    return 0;
}