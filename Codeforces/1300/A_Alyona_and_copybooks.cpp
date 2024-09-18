#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, a, b, c;
    cin >> n >> a >> b >> c;

    ll r = n % 4;
    if (r == 0)
    {
        cout << 0 << endl;
    }
    else if (r == 1)
    {
        ll ans = min({3 * a, a + b, c});
        cout << ans << endl;
    }
    else if (r == 2)
    {
        ll ans = min({2 * a, b, c + c, c + a + b});
        cout << ans << endl;
    }
    else
    {
        ll ans = min({a, b + c, c + c + c});
        cout << ans << endl;
    }

    return 0;
}