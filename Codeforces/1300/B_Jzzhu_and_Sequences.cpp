#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll x, y;
    cin >> x >> y;

    ll n;
    cin >> n;

    ll ans = 0;

    if (n % 6 == 0)
    {
        ans = ((x - y) % M + M) % M;
    }
    else if (n % 6 == 1)
    {
        ans = (x + M) % M;
    }
    else if (n % 6 == 2)
    {
        ans = (y + M) % M;
    }
    else if (n % 6 == 3)
    {
        ans = ((y - x) % M + M) % M;
    }
    else if (n % 6 == 4)
    {
        ans = (-x + M) % M;
    }
    else
    {
        ans = (-y + M) % M;
    }

    cout << ans << endl;

    return 0;
}