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
        ll n, x, y;
        cin >> n >> x >> y;
        ll lcm = (1LL * x * y) / __gcd(x, y);
        ll redP = n / x - n / lcm;
        ll blueP = n / y - n / lcm;
        ll sum1 = redP * (n + n - redP + 1) / 2;
        ll sum2 = blueP * (1 + blueP) / 2;
        cout << sum1 - sum2 << endl;
        t--;
    }

    return 0;
}