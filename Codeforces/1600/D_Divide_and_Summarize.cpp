#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void func(ll l, ll r, set<pair<ll, ll>> &check, set<ll> &st, vector<ll> &v, vector<ll> &prefix)
{
    if (l > r)
    {
        return;
    }
    if (check.count({l, r}))
    {
        return;
    }
    check.insert({l, r});
    ll mid = (v[l] + v[r]) / 2;
    ll sum = prefix[r];
    if ((l - 1) >= 0)
    {
        sum -= prefix[l - 1];
    }
    st.insert(sum);
    ll pos = upper_bound(v.begin() + l, v.begin() + r + 1, mid) - v.begin();
    func(l, pos - 1, check, st, v, prefix);
    func(pos, r, check, st, v, prefix);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        vector<ll> prefix(n, 0);
        prefix[0] = v[0];
        for (ll i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + v[i];
        }
        set<pair<ll, ll>> check;
        set<ll> st;
        func(0, n - 1, check, st, v, prefix);
        while (q--)
        {
            ll x;
            cin >> x;
            if (st.count(x))
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        t--;
    }

    return 0;
}