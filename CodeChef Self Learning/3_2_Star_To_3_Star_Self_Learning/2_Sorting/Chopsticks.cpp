#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, d;
    cin >> n >> d;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ll ans = 0;
    ll i = 0;
    while (i < (n - 1))
    {
        ll x = a[i + 1] - a[i];
        if (x <= d)
        {
            ans++;
            i += 2;
        }
        else
        {
            i++;
        }
    }
    cout << ans << endl;

    return 0;
}