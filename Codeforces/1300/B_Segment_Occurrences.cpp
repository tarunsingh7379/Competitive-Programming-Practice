#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, q;
    cin >> n >> m >> q;
    string s;
    cin >> s;
    string t;
    cin >> t;
    vector<ll> ans(n, 0);
    for (ll i = 0; i < n; i++)
    {
        if (s.substr(i, m) == t)
        {
            ans[i] = 1;
        }
    }
    for (int i = 1; i < n; i++)
    {
        ans[i] += ans[i - 1];
    }
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        l--;
        r--;
        if (r - l + 1 < m)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << ans[r - m + 1] - (l - 1 >= 0 ? ans[l - 1] : 0) << endl;
        }
    }

    return 0;
}