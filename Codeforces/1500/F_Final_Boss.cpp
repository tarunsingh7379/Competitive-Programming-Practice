#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(ll health, ll k, vector<ll> &a, vector<ll> &b)
{
    for (ll i = 0; i < a.size(); i++)
    {
        health -= (1 + k / b[i]) * a[i];
    }
    return (health <= 0);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll h, n;
        cin >> h >> n;
        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        ll l = 0, r = 1e12;
        ll ans = 0;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (check(h, mid, a, b))
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << ans + 1 << endl;
        t--;
    }

    return 0;
}