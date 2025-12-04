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
        ll a[n], b[n];
        set<ll> st;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            st.insert(a[i]);
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
            st.insert(b[i]);
        }
        sort(a, a + n);
        sort(b, b + n);
        ll ans = 0;
        for (auto it : st)
        {
            ll price = it;
            ll ind = lower_bound(b, b + n, price) - b;
            ll buyer = n - ind;
            ind = lower_bound(a, a + n, price) - a;
            ll positive = n - ind;
            ll negative = buyer - positive;
            if (negative <= k)
            {
                ans = max(ans, buyer * price);
            }
        }
        cout << ans << endl;

        t--;
    }

    return 0;
}