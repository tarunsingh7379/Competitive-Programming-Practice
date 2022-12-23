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
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<ll, ll> first;
        map<ll, ll> last;
        for (ll i = 0; i < n; i++)
        {
            if (first[a[i]])
            {
                last[a[i]] = i + 1;
            }
            else
            {
                first[a[i]] = i + 1;
                last[a[i]] = i + 1;
            }
        }
        while (k--)
        {
            ll x, y;
            cin >> x >> y;

            if (first[x] != 0 && last[y] != 0 && first[x] <= last[y])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        t--;
    }

    return 0;
}