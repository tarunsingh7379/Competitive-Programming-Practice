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

    if (n % 2 == 0)
    {
        ll x = n / 2;
        ll ans = x * (x + 1) - x * x;
        cout << ans << endl;
    }
    else
    {
        ll x1 = n / 2;
        ll x2 = n / 2 + 1;
        ll ans = x1 * (x1 + 1) - x2 * x2;
        cout << ans << endl;
    }

    return 0;
}