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
        for (ll i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                if (k * i <= n)
                {
                    ans = max(ans, i);
                }
                if (k * (n / i) <= n)
                {
                    ans = max(ans, n / i);
                }
            }
        }
        cout << ans << endl;

        t--;
    }

    return 0;
}