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
        ll n, x, y;
        cin >> n >> x >> y;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans = 0;
        set<ll> st;
        for (ll i = 0; i < n; i++)
        {
            ll left = max(1LL, a[i] - x * y);
            ll right = min(100LL, a[i] + x * y);
            for (ll j = left; j <= right; j++)
            {
                st.insert(j);
            }
        }
        ans = 100 - st.size();
        cout << ans << endl;
        t--;
    }

    return 0;
}