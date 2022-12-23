#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll r, x1, y1, x2, y2;
    cin >> r >> x1 >> y1 >> x2 >> y2;
    ll d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    ll x = sqrtl(d);
    if (x * x != d)
    {
        x++;
    }
    ll ans = (x + 2 * r - 1) / (2 * r);

    cout << ans << endl;

    return 0;
}