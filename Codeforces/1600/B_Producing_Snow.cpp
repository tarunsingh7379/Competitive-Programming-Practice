#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll a[n], b[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll ans = 0;
    multiset<ll> st;
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x = a[i] + sum;
        st.insert(x);

        sum += b[i];
        while (!st.empty())
        {
            auto it = st.begin();
            if (*it <= sum)
            {
                ll rem = (*it - (sum - b[i]));
                ans += rem;
                st.erase(it);
            }
            else
            {
                break;
            }
        }
        ans += b[i] * st.size();
        cout << ans << " ";
        ans = 0;
    }
    cout << endl;

    return 0;
}