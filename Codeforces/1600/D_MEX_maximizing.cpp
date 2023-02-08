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
    set<pair<ll, ll>> st;
    for (ll i = 0; i < k; i++)
    {
        st.insert({0, i});
    }
    vector<ll> f(k, 0);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        st.erase({f[x % k], x % k});
        f[x % k]++;
        st.insert({f[x % k], x % k});
        ll ans = st.begin()->first * k + st.begin()->second;
        cout << ans << endl;
    }

    return 0;
}