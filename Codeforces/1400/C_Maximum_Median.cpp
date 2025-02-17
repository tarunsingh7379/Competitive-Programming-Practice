#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(ll med, vector<ll> &a, ll k)
{
    ll n = a.size();
    ll cost = 0;
    for (ll i = n / 2; i < n; i++)
    {
        if (a[i] < med)
        {
            cost += (med - a[i]);
        }
    }
    return (cost <= k);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll l = 1, r = 1e12;
    ll ans = 1;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (check(mid, a, k))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;

    return 0;
}