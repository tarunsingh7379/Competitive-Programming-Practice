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
        ll a, b;
        cin >> a >> b;
        for (ll i = 0; i <= 30; i++)
        {
            if (a & (1LL << i) && b & (1LL << i))
            {
                a &= ~(1LL << i);
                b &= ~(1LL << i);
            }
        }
        ll ans = a + b;
        cout << ans << endl;
        t--;
    }

    return 0;
}