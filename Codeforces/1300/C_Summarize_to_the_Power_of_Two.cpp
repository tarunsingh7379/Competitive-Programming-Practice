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
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    set<ll> used;
    sort(a, a + n);
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll flag = 0;
        for (ll j = 0; j <= 30; j++)
        {
            ll x = (1LL << j);
            ll rem = x - a[i];
            if (rem > 0)
            {
                if ((rem != a[i] && mp[rem]) || (rem == a[i] && mp[rem] > 1))
                {
                    used.insert(rem);
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0 && !used.count(a[i]))
        {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}