#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool ok = true;
        for (ll i = 1; i < n - 1; i++)
        {
            a[i] -= 2 * a[i - 1];
            a[i + 1] -= a[i - 1];
            a[i - 1] = 0;
            if (a[i] < 0 || a[i + 1] < 0)
            {
                ok = false;
                break;
            }
        }
        for (ll i = 0; i < n; i++)
        {
            if (a[i] != 0)
                ok = false;
        }
        cout << (ok ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}