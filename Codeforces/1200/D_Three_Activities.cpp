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
        vector<pair<ll, ll>> a, b, c;
        for (ll i = 0; i < 3; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                ll x;
                cin >> x;
                if (i == 0)
                    a.push_back({x, j});
                else if (i == 1)
                    b.push_back({x, j});
                else
                    c.push_back({x, j});
            }
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());
        ll ans = 0;
        for (int i = n - 1; i >= n - 3; i--)
        {
            for (int j = n - 1; j >= n - 3; j--)
            {
                for (int k = n - 1; k >= n - 3; k--)
                {
                    set<int> st;
                    st.insert(a[i].second);
                    st.insert(b[j].second);
                    st.insert(c[k].second);
                    if (st.size() == 3)
                    {
                        ans = max(ans, a[i].first + b[j].first + c[k].first);
                    }
                }
            }
        }

        cout << ans << endl;
        t--;
    }

    return 0;
}