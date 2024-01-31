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
    ll ans = 0;
    for (ll i = 1; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            ll c_sqr = i * i + j * j;
            ll c = sqrtl(c_sqr);
            if (c * c == c_sqr && c <= n)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}