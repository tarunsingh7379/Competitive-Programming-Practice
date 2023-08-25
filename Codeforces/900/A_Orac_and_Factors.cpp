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
        ll n, k;
        cin >> n >> k;
        ll d = n;
        for (ll i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                d = i;
                break;
            }
        }
        ll ans = n + d + 2 * (k - 1);
        cout << ans << endl;
        t--;
    }

    return 0;
}