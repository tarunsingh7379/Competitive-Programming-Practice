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
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = 0;
        for (ll i = 1; i < n; i++)
        {
            ll cnt = 0;
            if (a[i] < a[i - 1])
            {
                ll d = a[i - 1] - a[i];
                for (ll j = 31; j >= 0; j--)
                {
                    if (d & (1LL << j))
                    {
                        ans = max(ans, j + 1);
                        break;
                    }
                }
                a[i] = a[i - 1];
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}