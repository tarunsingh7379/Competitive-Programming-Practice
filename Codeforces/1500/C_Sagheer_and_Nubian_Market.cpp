#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll check(ll k, vector<ll> a)
{
    for (ll i = 0; i < a.size(); i++)
    {
        a[i] = a[i] + (i + 1) * k;
    }
    sort(a.begin(), a.end());
    ll ans = 0;
    for (ll i = 0; i < k; i++)
    {
        ans += a[i];
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, s;
    cin >> n >> s;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll l = 0, r = n, ans = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (check(mid, a) <= s)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << " " << check(ans, a) << endl;
    return 0;
}