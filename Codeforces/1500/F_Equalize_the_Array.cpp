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
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            mp[x]++;
        }
        ll ans = n;
        set<int> st;
        for (auto num : mp)
        {
            st.insert(num.second);
        }
        for (auto num : st)
        {
            ll cost = 0;
            for (auto x : mp)
            {
                ll f = x.second;
                if (f >= num)
                {
                    cost += (f - num);
                }
                else
                {
                    cost += f;
                }
            }
            ans = min(ans, cost);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}