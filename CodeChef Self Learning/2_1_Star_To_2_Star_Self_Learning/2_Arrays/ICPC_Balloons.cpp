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
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        set<ll> st;
        for (ll i = 1; i <= 7; i++)
        {
            st.insert(i);
        }
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            if (st.count(a[i]))
            {
                st.erase(a[i]);
            }
            if (st.empty())
            {
                ans = i + 1;
                break;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}