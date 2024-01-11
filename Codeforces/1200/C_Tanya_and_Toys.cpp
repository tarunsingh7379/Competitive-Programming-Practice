#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    set<ll> st;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        st.insert(x);
    }
    vector<ll> ans;
    for (ll i = 1; i <= 2 * 1e5; i++)
    {
        if (st.count(i))
        {
            continue;
        }
        m -= i;
        if (m < 0)
        {
            break;
        }
        ans.push_back(i);
    }
    cout << ans.size() << endl;
    for (auto num : ans)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}