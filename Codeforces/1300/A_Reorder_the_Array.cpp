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
    for (auto num : mp)
    {
        ans = max(ans, num.second);
    }
    cout << n - ans << endl;

    return 0;
}