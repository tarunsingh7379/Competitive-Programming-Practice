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
        vector<ll> prefix(n, 0);
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            prefix[i] = sum;
        }
        ll ans = 0;
        map<ll, ll> mp;
        ll ma = 0;
        int first = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                if (!first)
                {
                    ans += mp[0];
                    first = 1;
                }
                else
                {
                    ans += ma;
                }
                mp.clear();
                ma = 0;
            }
            mp[prefix[i]]++;
            ma = max(ma, mp[prefix[i]]);
        }
        if (!first)
        {
            ans += mp[0];
            first = 1;
        }
        else
        {
            ans += ma;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}