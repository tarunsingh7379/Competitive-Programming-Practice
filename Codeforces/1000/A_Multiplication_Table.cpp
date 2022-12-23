#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x;
    cin >> n >> x;
    ll ans = 0;
    for (ll i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            ll a = i, b = x / i;
            if (max(a, b) <= n)
            {
                ans++;
                if (a != b)
                {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}