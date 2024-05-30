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
    ll b[m];
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    for (ll i = 0; i < m; i++)
    {
        ll ind = upper_bound(a, a + n, b[i]) - a;
        ind--;
        if (ind >= 0)
        {
            cout << ind + 1 << " ";
        }
        else
        {
            cout << 0 << " ";
        }
    }

    return 0;
}