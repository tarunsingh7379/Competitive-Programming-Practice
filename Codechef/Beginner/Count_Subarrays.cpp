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
        ll cnt = 1;
        ll ans = 0;
        for (ll i = 0; i < (n - 1); i++)
        {
            if (a[i] <= a[i + 1])
            {
                cnt++;
            }
            else
            {
                ans = ans + (cnt * (cnt + 1)) / 2;
                cnt = 1;
            }
        }
        ans = ans + (cnt * (cnt + 1)) / 2;
        cout << ans << endl;
        t--;
    }

    return 0;
}