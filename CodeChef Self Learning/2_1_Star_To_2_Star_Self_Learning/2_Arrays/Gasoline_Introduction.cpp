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
        ll fu = a[0];
        for (ll i = 1; i < n; i++)
        {
            if (fu > 0)
            {
                fu--;
                fu += a[i];
                ans++;
            }
            else
            {
                break;
            }
        }
        ans += fu;
        cout << ans << endl;
        t--;
    }

    return 0;
}