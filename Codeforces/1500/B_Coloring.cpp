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
        ll n, m, k;
        cin >> n >> m >> k;
        ll a[m];
        for (ll i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        ll cnt = 0;
        bool ok = true;
        for (ll i = 0; i < m; i++)
        {
            if (a[i] == (n + k - 1) / k)
            {
                cnt++;
            }
            else if (a[i] > (n + k - 1) / k)
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            ll last = ((n % k == 0) ? k : n % k);
            cout << (cnt <= last ? "YES" : "NO") << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }

    return 0;
}