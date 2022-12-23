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
        ll x;
        cin >> x;
        ll ans = 1;
        ll sum = 0;
        for (ll i = 1; i <= 50; i++)
        {
            ll a = (1LL << i) - 1;
            sum = sum + (a * (a + 1)) / 2;
            if (sum <= x)
            {
                ans = i;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}