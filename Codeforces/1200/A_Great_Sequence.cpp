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
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        ll ans = 0;
        sort(a, a + n);
        map<ll, ll> consumed;
        for (ll i = 0; i < n; i++)
        {
            ll req = a[i] * k;
            if (consumed[a[i]] > 0)
            {
                consumed[a[i]]--;
                continue;
            }
            if (mp[req] > 0)
            {
                mp[req]--;
                consumed[req]++;
            }
            else
            {
                ans++;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}