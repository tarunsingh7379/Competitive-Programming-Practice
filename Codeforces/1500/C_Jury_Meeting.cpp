#include <bits/stdc++.h>
typedef long long int ll;
#define M 998244353
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    ll fact[200005];
    fact[0] = 1;
    ll p = 1;
    for (ll i = 1; i <= 200001; i++)
    {
        p = (p * i) % M;
        fact[i] = p;
    }
    while (t)
    {
        ll n;
        cin >> n;
        ll a[n];
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        sort(a, a + n);
        if (a[n - 1] - a[n - 2] > 1)
        {
            cout << 0 << endl;
        }
        else
        {
            ll ans = 1;
            for (auto num : mp)
            {
                ans = (ans * fact[num.second]) % M;
            }
            cout << ans << endl;
        }
        t--;
    }

    return 0;
}