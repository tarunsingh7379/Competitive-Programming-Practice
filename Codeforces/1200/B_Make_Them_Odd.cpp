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
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            mp[x]++;
        }
        ll ans = 0;
        while (!mp.empty())
        {
            ll x = mp.rbegin()->first;
            if (x % 2 == 0)
            {
                ans++;
                mp[x / 2] = mp[x / 2] + mp[x];
                mp[x] = 0;
                mp.erase(x);
            }
            else
            {
                mp.erase(x);
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}