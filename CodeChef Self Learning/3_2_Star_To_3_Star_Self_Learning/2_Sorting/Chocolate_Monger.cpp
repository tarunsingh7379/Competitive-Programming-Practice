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
        ll n, x;
        cin >> n >> x;
        set<ll> st;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            st.insert(x);
        }
        ll ans = st.size();
        ll rem = n - st.size();
        if (rem < x)
        {
            ll d = x - rem;
            ans = ans - d;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}