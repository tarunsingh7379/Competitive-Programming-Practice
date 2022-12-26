#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<ll, ll> mp;
    ll sum = 0;
    ll ans = 0;
    ll x = 1e16;
    for (ll i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum == 0)
        {
            ans++;
            mp[sum - a[i] + x] = 1;
            sum += x;
            x++;
        }
        if (mp.find(sum) != mp.end())
        {
            ans++;
            mp[sum - a[i] + x] = 1;
            sum += x;
            x++;
        }
        mp[sum] = 1;
    }
    cout << ans << endl;
    return 0;
}