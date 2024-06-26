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
        map<ll, ll> mp;
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ans += mp[a[i]];
            if (a[i] == 1)
            {
                ans += mp[2];
            }
            else if (a[i] == 2)
            {
                ans += mp[1];
            }
            mp[a[i]]++;
        }
        cout << ans << endl;

        t--;
    }

    return 0;
}