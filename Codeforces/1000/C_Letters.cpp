#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> prefix(n);
    prefix[0] = a[0];
    for (ll i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i];
    }
    while (m--)
    {
        ll x;
        cin >> x;
        ll ind = lower_bound(prefix.begin(), prefix.end(), x) - prefix.begin();
        ll ans = x;
        if (ind - 1 >= 0)
        {
            ans = x - prefix[ind - 1];
        }
        cout << ind + 1 << " " << ans << endl;
    }

    return 0;
}