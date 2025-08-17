#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

#define ordered_set tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>

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
        vector<pair<ll, ll>> v;
        for (ll i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            v.push_back({x, y});
        }
        sort(v.begin(), v.end());
        ll ans = 0;
        ordered_set st;
        for (ll i = 0; i < n; i++)
        {
            ll cnt = st.size() - st.order_of_key(v[i].second);
            ans += cnt;
            st.insert(v[i].second);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}