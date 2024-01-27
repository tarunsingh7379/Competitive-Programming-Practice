#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll ans = INT_MAX;
    for (ll i = 0; i <= 100; i++)
    {
        for (ll j = 0; j <= 100; j++)
        {
            ll left = b + a * i;
            ll right = d + c * j;
            if (left == right)
            {
                ans = min(ans, left);
            }
        }
    }
    if (ans == INT_MAX)
    {
        ans = -1;
    }
    cout << ans << endl;

    return 0;
}