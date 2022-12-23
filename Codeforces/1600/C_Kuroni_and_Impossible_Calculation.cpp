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
    if (n <= m)
    {
        ll ans = 1;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = i + 1; j < n; j++)
            {
                ans = (ans * abs(a[i] - a[j])) % m;
            }
        }
        cout << ans << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}