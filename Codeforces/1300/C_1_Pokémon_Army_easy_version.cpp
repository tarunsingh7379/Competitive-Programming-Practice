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
        ll n, q;
        cin >> n >> q;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> dp1(n + 1, -1e16), dp2(n + 1, 0);
        for (ll i = 0; i < n; i++)
        {
            dp1[i + 1] = max(dp1[i], dp2[i] + a[i]);
            dp2[i + 1] = max(dp2[i], dp1[i] - a[i]);
        }
        cout << max(dp1[n], dp2[n]) << endl;
        t--;
    }

    return 0;
}