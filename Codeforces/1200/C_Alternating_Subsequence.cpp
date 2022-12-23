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
        ll ans = 0;
        ll i = 0;
        while (i < n)
        {
            if (a[i] > 0)
            {
                ll ma = a[i];
                while (i < n && a[i] > 0)
                {
                    ma = max(ma, a[i]);
                    i++;
                }
                ans += ma;
            }
            else
            {
                ll ma = a[i];
                while (i < n && a[i] < 0)
                {
                    ma = max(ma, a[i]);
                    i++;
                }
                ans += ma;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}