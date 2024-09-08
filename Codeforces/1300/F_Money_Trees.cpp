#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll check(ll l, ll r, ll k, vector<ll> &a)
{
    ll i = l;
    ll ans = 0, sum = 0;
    for (ll j = l; j < r; j++)
    {
        sum += a[j];
        while (i <= j && sum > k)
        {
            sum -= a[i];
            i++;
        }
        if (i <= j)
            ans = max(ans, j - i + 1);
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
        vector<ll> a(n), h(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        ll ans = 0, sum = 0;
        ll l = 0;
        for (ll r = 1; r < n; r++)
        {
            if (h[r - 1] % h[r] != 0)
            {
                ans = max(ans, check(l, r, k, a));
                l = r;
            }
        }
        ans = max(ans, check(l, n, k, a));
        cout << ans << endl;
        t--;
    }

    return 0;
}