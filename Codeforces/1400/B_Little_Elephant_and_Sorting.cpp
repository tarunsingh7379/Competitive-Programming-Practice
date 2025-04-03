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
    ll ans = 0;
    for (ll i = 1; i < n; i++)
    {
        ll diff = a[i - 1] - a[i];
        if (diff > 0)
        {
            ans += diff;
        }
    }
    cout << ans << endl;

    return 0;
}