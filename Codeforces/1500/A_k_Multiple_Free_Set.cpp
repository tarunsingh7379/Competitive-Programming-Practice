#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mp[x]++;
    }
    ll ans = 0;
    for (auto num : mp)
    {
        ll val = num.first, cnt = num.second;
        if (cnt == 0)
        {
            continue;
        }
        if (mp[val * k] == 0)
        {
            ans = ans + cnt;
        }
        else
        {
            ans = ans + max(cnt, mp[val * k]);
            mp[val * k] = 0;
        }
    }
    cout << ans << endl;

    return 0;
}