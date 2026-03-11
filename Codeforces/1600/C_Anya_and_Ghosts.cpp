#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll m, t, r;
    cin >> m >> t >> r;
    vector<ll> w(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> w[i];
    }
    map<ll, ll> mp;
    ll ans = 0;
    for (ll i = 0; i < m; i++)
    {
        ll cnt = 0;
        for (ll j = w[i] - 1; j >= w[i] - t; j--)
        {
            if (mp[j] != 0)
            {
                cnt++;
            }
        }
        for (ll j = w[i] - 1; j >= w[i] - t && cnt < r; j--)
        {
            if (mp[j] == 0)
            {
                mp[j] = 1;
                cnt++;
                ans++;
            }
        }
        if (cnt < r)
        {
            ans = -1;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}