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
        vector<ll> v;
        ll cnt = 0;
        for (auto &num : mp)
        {
            cnt++;
            num.second--;
            if (num.second == 0)
            {
                v.push_back(num.first);
            }
        }
        for (auto x : v)
        {
            mp.erase(x);
        }
        ans += (cnt - 1);
    }
    cout << ans << endl;
    return 0;
}