#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll y, k, n;
    cin >> y >> k >> n;

    ll x = 0;
    if (y % k != 0)
    {
        ll z = y / k + 1;
        x = k * z - y;
    }
    if (x == 0)
    {
        x += k;
    }
    if (x + y > n)
    {
        cout << -1 << endl;
    }
    while (x + y <= n)
    {
        cout << x << " ";
        x += k;
    }

    return 0;
}