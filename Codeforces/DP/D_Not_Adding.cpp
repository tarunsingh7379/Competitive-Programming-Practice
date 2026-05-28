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
    ll ma = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        ma = max(ma, a[i]);
    }
    vector<ll> freq(ma + 1, 0);
    for (ll i = 0; i < n; i++)
    {
        freq[a[i]]++;
    }
    ll ans = 0, g = 0;
    for (ll i = 1; i <= ma; i++)
    {
        if (freq[i])
        {
            continue;
        }
        g = 0;
        for (ll j = i; j <= ma; j += i)
        {
            if (freq[j])
            {
                g = __gcd(g, j);
            }
        }
        if (g == i)
        {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}