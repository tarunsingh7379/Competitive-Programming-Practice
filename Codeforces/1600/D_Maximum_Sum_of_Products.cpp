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
    ll b[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans = ans + (a[i] * b[i]);
    }
    ll total = ans;
    for (ll i = 0; i < n; i++)
    {
        ll current = total;
        ll x = i - 1, y = i + 1;
        while (x >= 0 && y < n)
        {
            current -= (a[x] * b[x] + a[y] * b[y]);
            current += (a[x] * b[y] + a[y] * b[x]);
            ans = max(ans, current);
            x--;
            y++;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        ll current = total;
        ll x = i, y = i + 1;
        while (x >= 0 && y < n)
        {
            current -= (a[x] * b[x] + a[y] * b[y]);
            current += (a[x] * b[y] + a[y] * b[x]);
            ans = max(ans, current);
            x--;
            y++;
        }
    }
    cout << ans << endl;
    return 0;
}