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
    ll mi = 1e18, total = 0;
    for (ll i = 0; i < n; i++)
    {
        mi = min(mi, a[i]);
        total += a[i];
    }
    ll extra = 0;
    for (ll i = 0; i < n; i++)
    {
        extra += a[i] - mi;
    }
    if (total < k)
    {
        cout << -1 << endl;
    }
    else if (total == k)
    {
        cout << 0 << endl;
    }
    else
    {
        if (extra >= k)
        {
            cout << mi << endl;
        }
        else
        {
            ll d = (k - extra + n - 1) / n;
            cout << mi - d << endl;
        }
    }

    return 0;
}