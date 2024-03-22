#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, q;
    cin >> n >> q;
    for (ll i = 0; i < q; i++)
    {
        ll x, y;
        cin >> x >> y;
        ll ans = (x - 1) * n + y;
        ans = (ans + 1) / 2;
        if ((x + y) % 2)
        {
            ans = ans + (n * n + 1) / 2;
        }
        cout << ans << endl;
    }

    return 0;
}