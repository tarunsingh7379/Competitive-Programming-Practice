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
        string s;
        cin >> s;
        map<ll, ll> mp;
        mp[0]++;
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            sum += (s[i] - '0');
            mp[sum - (i + 1)]++;
        }
        ll ans = 0;
        for (auto num : mp)
        {
            ll x = num.second;
            ans += x * (x - 1) / 2;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}