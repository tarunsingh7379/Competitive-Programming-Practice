#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(ll k, string &s)
{
    ll n = s.size();
    vector<ll> used(n, 0);
    for (ll i = n - 1; i >= 0; i--)
    {
        if (k > 0 && s[i] == '1')
        {
            used[i] = 1;
            k--;
        }
    }
    ll cur = 0;
    for (ll i = 0; i < n; i++)
    {
        if (used[i])
        {
            cur--;
            if (cur < 0)
            {
                return false;
            }
        }
        else
        {
            cur++;
        }
    }
    return true;
}

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
        string s;
        cin >> s;
        ll ones = 0;
        for (auto c : s)
        {
            if (c == '1')
            {
                ones++;
            }
        }
        ll l = 1, r = ones;
        ll ans = 0;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (check(mid, s))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        ll res = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (ans > 0 && s[i] == '1')
            {
                ans--;
            }
            else
            {
                res += (i + 1);
            }
        }
        cout << res << endl;
        t--;
    }

    return 0;
}