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
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ll cnt1 = 0, cnt2 = 0;
            for (ll j = 0; j < n; j++)
            {
                if (j == i)
                {
                    continue;
                }
                if (a[j] <= a[i])
                {
                    cnt1++;
                }
                else
                {
                    cnt2++;
                }
            }
            if (cnt1 >= cnt2)
            {
                ans++;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}