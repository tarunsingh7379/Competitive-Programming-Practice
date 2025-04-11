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
    sort(a, a + n);
    bool ok = true;
    for (ll i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            continue;
        }
        if (a[i] < 2 * a[i - 1])
        {
            ok = false;
            break;
        }
    }

    cout << (ok ? "NO" : "YES") << endl;

    return 0;
}