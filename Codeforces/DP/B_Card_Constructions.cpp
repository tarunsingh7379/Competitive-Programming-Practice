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
        ll ans = 0;
        for (ll i = sqrt(n); i >= 1; i--)
        {
            ll cost = (3 * i * i + i);
            if (cost % 2 == 0)
            {
                cost /= 2;
                if (cost <= n)
                {
                    n -= cost;
                    ans++;
                    i++;
                }
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}