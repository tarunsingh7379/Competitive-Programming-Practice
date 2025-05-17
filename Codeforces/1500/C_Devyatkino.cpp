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
        ll ans = 7;
        for (ll i = 1; i <= n; i *= 10)
        {
            ll num1 = 10 * i - 1;
            ll num2 = num1 / 10;
            for (ll j = 0; j <= 9; j++)
            {
                ll sum = (n + j * num1);
                sum /= i;
                if (sum % 10 == 7)
                {
                    ans = min(ans, j);
                }
                sum = (n + j * num2);
                sum /= i;
                if (sum % 10 == 7)
                {
                    ans = min(ans, j);
                }
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}