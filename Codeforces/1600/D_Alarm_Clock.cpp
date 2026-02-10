#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, k;
    cin >> n >> m >> k;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    multiset<ll> st;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x = a[i] - m + 1;
        while (!st.empty() && *st.begin() < x)
        {
            st.erase(st.begin());
        }
        if (st.size() >= k - 1)
        {
            ans++;
        }
        else
        {
            st.insert(a[i]);
        }
    }
    cout << ans << endl;

    return 0;
}