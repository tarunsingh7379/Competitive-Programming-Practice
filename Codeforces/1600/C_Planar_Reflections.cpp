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
        if (k == 1)
        {
            cout << 1 << endl;
        }
        else if (n == 1)
        {
            cout << 2 << endl;
        }
        else
        {
            ll a[n - 1] = {0};
            ll ans = 2;
            k--;
            for (ll i = 0; i < n - 1; i++)
            {
                a[i] = 1;
                ans++;
            }
            ll flag = 1;
            while (k > 1)
            {
                if (flag == 1)
                {
                    for (ll i = 1; i < n - 1; i++)
                    {
                        a[i] = (a[i] + a[i - 1]) % M;
                    }
                }
                else
                {
                    for (ll i = n - 3; i >= 0; i--)
                    {
                        a[i] = (a[i] + a[i + 1]) % M;
                    }
                }
                for (ll i = 0; i < n - 1; i++)
                {
                    ans = (ans + a[i]) % M;
                }
                flag = flag ^ 1;
                k--;
            }
            cout << ans << endl;
        }
        t--;
    }

    return 0;
}