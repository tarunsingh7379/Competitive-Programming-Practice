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
    ll ans = 0;
    if (n % 2 != 0)
    {
        for (ll i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                n -= i;
                ans++;
                break;
            }
        }
        if (ans == 0)
        {
            ans++;
            n = 0;
        }
    }
    ans = ans + n / 2;
    cout << ans << endl;
    return 0;
}