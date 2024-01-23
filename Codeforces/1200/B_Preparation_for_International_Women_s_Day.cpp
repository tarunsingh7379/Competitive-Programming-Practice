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
    vector<ll> rem(k);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        rem[a[i] % k]++;
    }
    ll ans = rem[0] / 2 * 2;
    for (ll i = 1; i < k; i++)
    {
        ans = ans + min(rem[i], rem[k - i]);
    }
    if (k % 2 == 0)
        ans = ans - rem[k / 2] + rem[k / 2] / 2 * 2;
    cout << ans << endl;
    return 0;
}