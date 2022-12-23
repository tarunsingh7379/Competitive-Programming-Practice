#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, k;
    cin >> n >> m >> k;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll sum = 0;
        for (ll j = 0; j < k; j++)
        {
            ll x;
            cin >> x;
            sum += x;
        }
        ll q;
        cin >> q;
        if (sum >= m && q <= 10)
        {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}