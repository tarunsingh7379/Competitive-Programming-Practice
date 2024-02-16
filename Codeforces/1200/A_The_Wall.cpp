#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll x, y, a, b;
    cin >> x >> y >> a >> b;
    ll g = __gcd(x, y);
    ll l = (x * y) / g;
    ll ans = b / l - (a - 1) / l;
    cout << ans << endl;

    return 0;
}