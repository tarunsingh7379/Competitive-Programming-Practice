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
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<ll, ll> mp;
        set<ll> st;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] % k != 0)
            {
                ll x = a[i] / k + 1;
                ll cost = k * x - a[i];
                ll cnt = mp[cost];
                ll z = cost + cnt * k;
                while (st.count(z))
                {
                    z += k;
                    cnt++;
                }
                st.insert(z);
                mp[cost] = cnt;
            }
        }
        ll ans = 0;
        if (!st.empty())
        {
            ans = *st.rbegin() + 1;
        }
        cout << ans << "\n";
        t--;
    }

    return 0;
}