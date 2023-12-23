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
        ll ans = 0;
        for (ll i = n; i >= 0; i--)
        {
            ll a = n;
            ll b = i;
            ll flag = 1;
            // cout << a << " " << b << " ";
            for (ll j = k - 3; j >= 0; j--)
            {
                ll c = a - b;
                if (c >= 0 && c <= min(a, b))
                {
                }
                else
                {
                    flag = 0;
                    break;
                }
                // cout << c << " ";
                a = b;
                b = c;
            }
            // cout << endl;
            if (flag)
            {
                ans++;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}