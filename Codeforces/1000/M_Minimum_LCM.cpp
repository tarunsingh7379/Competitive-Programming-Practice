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
        ll ans = 1;
        for (ll i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                ans = n / i;
                break;
            }
        }
        cout << ans << " " << n - ans << endl;
        t--;
    }

    return 0;
}