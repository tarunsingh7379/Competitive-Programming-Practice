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
        ll n, k, a, b;
        cin >> n >> k >> a >> b;
        ll x = n / k;
        ll r = n % k;
        if (b >= x)
        {
            b -= x;
            x = 0;
        }
        else
        {
            x = x - b;
            b = 0;
        }
        if (a >= r)
        {
            a -= r;
            r = 0;
        }
        else
        {
            r = r - a;
            a = 0;
        }
        ll ans = r;
        ll y = a / k;
        if (y >= x)
        {
            y -= x;
            x = 0;
        }
        else
        {
            x = x - y;
            y = 0;
        }
        ans += x;
        cout << ans << endl;
        t--;
    }

    return 0;
}