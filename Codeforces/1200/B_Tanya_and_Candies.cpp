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
    ll even = 0, odd = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i % 2 == 0)
        {
            even += a[i];
        }
        else
        {
            odd += a[i];
        }
    }
    ll ans = 0, e = 0, o = 0;
    for (ll i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            even -= a[i];
            if (e + odd == even + o)
            {
                ans++;
            }
            e += a[i];
        }
        else
        {
            odd -= a[i];
            if (e + odd == even + o)
            {
                ans++;
            }
            o += a[i];
        }
    }
    cout << ans << endl;

    return 0;
}