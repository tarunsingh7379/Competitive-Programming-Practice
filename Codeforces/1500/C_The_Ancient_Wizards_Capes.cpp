#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

/*
0 0   -> 1
1 1   -> -1
0 1   -> 0
1 0   -> 0

*/

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
        for (ll k = 0; k < 2; k++)
        {
            ll last = k;
            ll cnt = 1;
            bool ok = true;
            for (ll i = 1; i < n; i++)
            {
                if (abs(a[i] - a[i - 1]) > 1)
                {
                    ok = false;
                    break;
                }
                if (a[i] > a[i - 1])
                {
                    if (last == 1)
                    {
                        ok = false;
                        break;
                    }
                }
                else if (a[i] < a[i - 1])
                {
                    if (last == 0)
                    {
                        ok = false;
                        break;
                    }
                }
                else
                {
                    last ^= 1;
                }
                cnt += last;
            }
            if (ok && cnt == a[0])
            {
                ans++;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}