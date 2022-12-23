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
    vector<ll> a(n);
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

    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll req = prefix[i] + k - a[i];
        ll ind = upper_bound(prefix.begin(), prefix.end(), req) - prefix.begin();
        ind--;
        ans = max(ans, ind - i + 1);
    }
    cout << ans << endl;

    return 0;
}