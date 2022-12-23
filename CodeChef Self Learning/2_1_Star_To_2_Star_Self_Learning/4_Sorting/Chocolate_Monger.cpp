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
        set<ll> st;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            st.insert(x);
        }
        ll rem = n - st.size();
        ll ans = st.size();
        if (k > rem)
        {
            ll d = k - rem;
            ans -= d;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}