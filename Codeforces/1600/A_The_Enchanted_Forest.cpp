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
        ll prefix[n] = {0};
        prefix[0] = a[0];
        for (ll i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + a[i];
        }
        ll ans = 0;
        if (k >= n)
        {
            ans = prefix[n - 1] + n * k - n * (n + 1) / 2;
        }
        else
        {
            ans = max(ans, prefix[k - 1]);
            for (ll i = 1; i + k - 1 < n; i++)
            {
                ans = max(ans, prefix[i + k - 1] - prefix[i - 1]);
            }
            ans = ans + (k * (k - 1)) / 2;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}