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
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        ll ans = -1e18;

        ans = max(ans, v[0] * v[1] * v[2] * v[3] * v[4]);
        ans = max(ans, v[0] * v[1] * v[2] * v[3] * v[n - 1]);
        ans = max(ans, v[0] * v[1] * v[2] * v[n - 2] * v[n - 1]);
        ans = max(ans, v[0] * v[1] * v[n - 3] * v[n - 2] * v[n - 1]);
        ans = max(ans, v[0] * v[n - 4] * v[n - 3] * v[n - 2] * v[n - 1]);
        ans = max(ans, v[n - 5] * v[n - 4] * v[n - 3] * v[n - 2] * v[n - 1]);
        cout << ans << endl;
        t--;
    }

    return 0;
}