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
        ll ans = 1e10;
        ll pos = -1;
        for (ll i = 0; i < n; i++)
        {
            ll d = k - a[i];
            if (d >= 0 && d % a[i] == 0)
            {
                ll steps = d / a[i];
                if (steps < ans)
                {
                    ans = steps;
                    pos = a[i];
                }
            }
        }
        cout << pos << endl;
        t--;
    }

    return 0;
}