#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(ll ind, ll prev, ll m, vector<ll> &a, vector<ll> &b)
{
    if (ind < 0)
    {
        if (prev == 0)
            return 0;
        return 1e10;
    }
    ll ans = 1e16;
    ans = min(ans, a[ind] + func(ind - 1, 1, m, a, b));
    ans = min(ans, b[ind] + func(ind - 1, 0, m, a, b));

    if (ind < m - 1)
        ans = min(ans, 0 + func(ind - 1, 1, m, a, b));

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
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        cout << func(n - 1, 0, m, a, b) << endl;
        t--;
    }

    return 0;
}