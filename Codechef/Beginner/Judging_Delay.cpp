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
        for (ll i = 0; i < n; i++)
        {
            ll s, j;
            cin >> s >> j;
            ll d = j - s;
            if (d > 5)
            {
                ans++;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}