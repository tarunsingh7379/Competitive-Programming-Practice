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
        ll n, x;
        cin >> n >> x;
        ll ans = 0;
        for (ll a = 1; a <= n; a++)
        {
            for (ll b = 1; b <= n / a; b++)
            {
                ll c = x - a - b;
                c = min(c, (n - a * b) / (a + b));
                if (c >= 1)
                {
                    ans += c;
                }
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}