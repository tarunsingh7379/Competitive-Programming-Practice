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
        ll n;
        cin >> n;
        ll ans = 0;
        for (ll i = 2; i <= 30; i++)
        {
            ll d = (1LL << i) - 1;
            if (n % d == 0)
            {
                ans = n / d;
                break;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}