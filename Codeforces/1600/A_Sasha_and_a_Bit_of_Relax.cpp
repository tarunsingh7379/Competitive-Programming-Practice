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
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<ll, ll> freq_odd, freq_even;
    ll x = 0, ans = 0;
    for (ll i = 0; i < n; i++)
    {
        x ^= a[i];
        if (x == 0 && i % 2 != 0)
        {
            ans++;
        }
        if (i % 2 == 0)
        {
            ans += freq_even[x];
            freq_even[x]++;
        }
        else
        {
            ans += freq_odd[x];
            freq_odd[x]++;
        }
    }
    cout << ans << endl;

    return 0;
}