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

    ll ans = 0;
    ll cnt = 0, extra = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            ans += (-1 - a[i]);
            cnt++;
        }
        if (a[i] >= 0 && a[i] != 1)
        {
            if (a[i] == 0)
            {
                extra++;
            }
            else
            {
                ans += (a[i] - 1);
            }
        }
    }
    if (cnt % 2 != 0)
    {
        if (extra)
        {
            ans++;
            extra--;
        }
        else
        {
            ans += 2;
        }
    }

    ans += extra;

    cout << ans << endl;

    return 0;
}