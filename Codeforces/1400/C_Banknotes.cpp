#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll power(ll x)
{
    ll res = 1;
    for (ll i = 0; i < x; i++)
    {
        res *= 10;
    }
    return res;
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
        k++;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll ans = 0;
        a.push_back(18);
        for (ll i = 0; i < n; i++)
        {
            ll x = power(a[i + 1] - a[i]) - 1;
            ll got = min(x, k);
            k -= got;
            ans += got * power(a[i]);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}