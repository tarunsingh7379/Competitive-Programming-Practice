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
        vector<ll> prefix(n, 0);
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] >= 0)
            {
                sum += a[i];
            }
            prefix[i] = sum;
        }
        vector<ll> suffix(n, 0);
        sum = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (a[i] < 0)
            {
                sum += abs(a[i]);
            }
            suffix[i] = sum;
        }
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ans = max(ans, prefix[i] + suffix[i]);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}