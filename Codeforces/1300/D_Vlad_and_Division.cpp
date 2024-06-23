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
        map<ll, ll> mp;
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (mp[a[i]] > 0)
            {
                mp[a[i]]--;
            }
            else
            {
                ans++;
                mp[((1LL << 31) - 1) ^ a[i]]++;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}