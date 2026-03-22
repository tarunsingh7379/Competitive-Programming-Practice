#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll get_count(ll mask, map<char, ll> &mp, string &a, string &b)
{
    ll n = a.size();
    ll ans = 0, len = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == b[i])
        {
            len++;
        }
        else if (mask & (1 << mp[a[i]]))
        {
            len++;
        }
        else
        {
            len = 0;
        }
        ans += len;
    }
    return ans;
}

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
        string a, b;
        cin >> a >> b;
        set<char> st(a.begin(), a.end());
        string uniq(st.begin(), st.end());
        ll m = uniq.size();
        ll ans = 0;
        map<char, ll> mp;
        for (ll i = 0; i < m; i++)
        {
            mp[uniq[i]] = i;
        }
        for (ll i = 0; i < (1 << m); i++)
        {
            if (__builtin_popcount(i) > k)
                continue;
            ans = max(ans, get_count(i, mp, a, b));
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}