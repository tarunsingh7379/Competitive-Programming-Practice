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
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        ans += mp[a[i] ^ k];
        mp[a[i]]++;
    }
    cout << ans << endl;

    return 0;
}