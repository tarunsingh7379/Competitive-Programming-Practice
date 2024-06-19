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
        vector<ll> a(n);
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }

        ll ans = 1, space = k;
        for (ll i = 0; i < n; i++)
        {
            ll found = -1;
            for (ll i = 30; i >= 0; i--)
            {
                if (mp[1 << i] > 0 && (1 << i) <= space)
                {
                    found = (1 << i);
                    break;
                }
            }
            if (found == -1)
            {
                space = k;
                ans++;
                for (ll i = 30; i >= 0; i--)
                {
                    if (mp[1 << i] > 0 && (1 << i) <= space)
                    {
                        found = (1 << i);
                        break;
                    }
                }
            }
            mp[found]--;
            space -= found;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}