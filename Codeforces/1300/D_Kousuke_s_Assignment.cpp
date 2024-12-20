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
        ll sum = 0, ans = 0;
        set<ll> st;
        st.insert(0);
        for (ll i = 0; i < n; i++)
        {
            sum += a[i];
            if (st.count(sum))
            {
                ans++;
                st.clear();
            }
            st.insert(sum);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}