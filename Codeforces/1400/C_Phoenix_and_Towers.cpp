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
        ll n, m, k;
        cin >> n >> m >> k;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        set<pair<ll, ll>> st;
        vector<int> ans(n, 0);
        for (ll i = 0; i < m; i++)
        {
            st.insert({a[i], i + 1});
            ans[i] = i + 1;
        }
        for (ll i = m; i < n; i++)
        {
            auto p = *st.begin();
            st.erase(st.begin());
            p.first += a[i];
            st.insert(p);
            ans[i] = p.second;
        }
        cout << "YES" << endl;
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}