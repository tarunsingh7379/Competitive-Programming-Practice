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
        double a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = n - 1;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = i + 1; j < n; j++)
            {
                ll cnt = 0;
                for (ll k = 0; k < n; k++)
                {
                    if ((a[k] - a[i]) * (k - j) != (a[k] - a[j]) * (k - i))
                    {
                        cnt++;
                    }
                }
                ans = min(ans, cnt);
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}