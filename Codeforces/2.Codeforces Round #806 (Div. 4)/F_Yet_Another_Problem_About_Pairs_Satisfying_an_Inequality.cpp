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
        ll f[n] = {0};
        for (ll i = 0; i < n; i++)
        {
            if (a[i] < (i + 1))
            {
                f[a[i]]++;
            }
        }

        ll prefix[n] = {0};
        prefix[0] = f[0];
        for (ll i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + f[i];
        }

        ll ans = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            if (a[i] < (i + 1))
            {
                ans = ans + prefix[n - 1] - prefix[i + 1];
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}