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
    for (ll i = 1; i <= 100; i++)
    {
        ll x = (sqrt(i * i + 4 * n) - i);
        if (x % 2 == 0)
        {
            x /= 2;
        }
        else
        {
            continue;
        }
        ll digit_sum = 0;
        ll ans = x;
        while (x)
        {
            digit_sum += x % 10;
            x /= 10;
        }
        if (digit_sum == i)
        {
            cout << ans << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}