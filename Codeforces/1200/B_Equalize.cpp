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
        ll a[n];
        set<ll> st;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            st.insert(a[i]);
        }
        vector<ll> v(st.begin(), st.end());
        ll ans = 0;
        ll l = 0;
        for (ll r = 0; r < v.size(); r++)
        {
            while (l <= r && v[r] - v[l] > (n - 1))
            {
                l++;
            }
            ans = max(ans, r - l + 1);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}