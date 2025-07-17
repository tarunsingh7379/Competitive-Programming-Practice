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
    map<ll, ll> front, back, same;
    set<ll> st;
    for (ll i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        front[x]++;
        back[y]++;
        if (x == y)
        {
            same[x]++;
        }
        st.insert(x);
        st.insert(y);
    }
    ll ans = INT_MAX;
    ll req = (n + 1) / 2;
    for (auto color : st)
    {
        ll x = front[color];
        ll y = back[color];
        ll total = x + y - same[color];
        ll cost = 0;
        if (total >= req)
        {
            if (x < req)
            {
                cost = req - x;
            }
            ans = min(ans, cost);
        }
    }
    if (ans == INT_MAX)
    {
        ans = -1;
    }
    cout << ans << endl;

    return 0;
}