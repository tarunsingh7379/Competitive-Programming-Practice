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
        vector<ll> suffix(n, 1e8);
        suffix[n - 1] = a[n - 1];
        for (ll i = n - 2; i >= 0; i--)
        {
            suffix[i] = min(suffix[i + 1], a[i]);
        }
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ans += (a[i] - suffix[i]);
        }
        ll extra = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (a[i] == suffix[i])
            {
                ll cur = 0;
                ll j = i - 1;
                while (j >= 0 && suffix[j] == suffix[i])
                {
                    j--;
                    cur++;
                }
                extra = max(extra, cur);
                i = j + 1;
            }
        }
        ans += extra;
        cout << ans << endl;
        t--;
    }

    return 0;
}