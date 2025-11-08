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
    ll a[n], b[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    bool ok = true;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 1 || b[i] == 1)
        {
            ok = false;
            break;
        }
    }
    if (!ok)
    {
        cout << -1 << endl;
    }
    else
    {
        double ans = m;
        ans += ans / (b[0] - 1);
        for (ll i = n - 1; i >= 1; i--)
        {
            ans += ans / (a[i] - 1);
            ans += ans / (b[i] - 1);
        }
        ans += ans / (a[0] - 1);
        ans = ans - m;
        cout << fixed << setprecision(12);
        cout << ans << endl;
    }

    return 0;
}