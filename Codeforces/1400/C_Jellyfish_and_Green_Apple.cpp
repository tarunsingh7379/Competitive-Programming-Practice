#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(ll n)
{
    while (n % 2 == 0)
    {
        n /= 2;
    }
    return n == 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n, m;
        cin >> n >> m;
        ll ans = 0;
        ll x = m / __gcd(n, m);
        if (check(x))
        {
            while (n % m != 0)
            {
                ans += (n % m);
                n = (2 * (n % m)) % m;
            }
        }
        else
        {
            ans = -1;
        }

        cout << ans << endl;
        t--;
    }

    return 0;
}