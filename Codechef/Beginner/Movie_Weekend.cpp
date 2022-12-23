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
        ll l[n], r[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> l[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> r[i];
        }
        ll ans = 0;
        ll mul = l[0] * r[0];
        for (ll i = 1; i < n; i++)
        {
            ll x = l[i] * r[i];
            if (x > mul)
            {
                mul = x;
                ans = i;
            }
            else if (x == mul)
            {
                if (r[i] > r[ans])
                {
                    ans = i;
                }
            }
        }
        cout << ans + 1 << endl;
        t--;
    }

    return 0;
}