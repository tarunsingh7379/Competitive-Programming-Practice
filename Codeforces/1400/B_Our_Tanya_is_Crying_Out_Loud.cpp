#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k, a, b;
    cin >> n >> k >> a >> b;
    ll ans = 0;
    while (n != 1)
    {
        ll rem = n % k;
        if (rem == 0)
        {
            ans = ans + min(b, (n - n / k) * a);
            n /= k;
        }
        else
        {
            n -= rem;
            ans += a * rem;
            if (n == 0)
            {
                ans -= a;
                n = 1;
            }
        }
    }
    cout << ans << endl;

    return 0;
}