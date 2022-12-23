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
        vector<ll> f(n, 0);
        for (ll i = 0; i < n; i++)
        {
            for (ll j = i + 1; j < n; j++)
            {
                if (a[i] > a[j])
                {
                    f[i]++;
                }
            }
        }
        ll ans = 0;
        for (ll i = 2; i < n; i++)
        {
            for (ll j = 0; j < i; j++)
            {
                if (a[j] > a[i])
                {
                    f[j]--;
                }
            }
            vector<ll> prefix(n, 0);
            prefix[0] = f[0];
            for (ll j = 1; j < n; j++)
            {
                prefix[j] = prefix[j - 1] + f[j];
            }
            for (ll j = 0; j < i; j++)
            {
                if (a[j] < a[i])
                {
                    ans = ans + prefix[i - 1] - prefix[j];
                }
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}