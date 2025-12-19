#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> v;
    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        v.push_back({b, a});
    }
    sort(v.begin(), v.end());
    set<pair<ll, ll>> st;
    ll sum = 0, ans = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        st.insert({v[i].second, i});
        sum += v[i].second;
        if (st.size() > k)
        {
            auto it = *st.begin();
            sum -= it.first;
            st.erase(it);
        }
        ans = max(ans, (v[i].first * sum));
    }
    cout << ans << endl;

    return 0;
}