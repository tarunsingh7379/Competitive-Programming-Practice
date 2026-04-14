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
        ll ans = -1e12;
        map<ll, ll> mp;
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            sum += a[i];
            if (i - 1 >= 0 && !((a[i - 1] ^ a[i]) & 1))
            {
                sum = a[i];
                mp.clear();
            }
            ans = max(ans, sum);
            if (!mp.empty())
            {
                ans = max(ans, sum - mp.begin()->first);
            }
            mp[sum]++;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}