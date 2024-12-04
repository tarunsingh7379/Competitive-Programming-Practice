#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x;
    cin >> n;
    map<ll, ll> mp;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        mp[i - x] += x;
        ans = max(ans, mp[i - x]);
    }
    cout << ans << endl;

    return 0;
}