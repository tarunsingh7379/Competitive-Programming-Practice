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
    ll a[n], b[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    map<pair<ll, ll>, ll> mp;
    ll cnt = 0, ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll g = __gcd(abs(a[i]), abs(b[i]));
        if (g > 0)
        {
            ll x = b[i] / g;
            ll y = a[i] / g;
            if ((x > 0 && y > 0) || (x < 0 && y < 0))
            {
                mp[{-abs(x), abs(y)}]++;
            }
            else if (y != 0)
            {
                mp[{abs(x), abs(y)}]++;
            }
        }
        else
        {
            cnt++;
        }
    }
    ans = cnt;
    for (auto num : mp)
    {
        ans = max(ans, cnt + num.second);
    }
    cout << ans << endl;

    return 0;
}