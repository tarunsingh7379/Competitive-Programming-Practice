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
        vector<ll> vx, vy;
        for (ll i = 0; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;
            vx.push_back(x);
            vy.push_back(y);
        }
        sort(vx.begin(), vx.end());
        sort(vy.begin(), vy.end());
        ll ans_x = vx[n / 2] - vx[(n - 1) / 2] + 1;
        ll ans_y = vy[n / 2] - vy[(n - 1) / 2] + 1;
        ll ans = ans_x * ans_y;
        cout << ans << endl;

        t--;
    }

    return 0;
}