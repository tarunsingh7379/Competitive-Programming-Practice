#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(ll a[], ll n, ll st, ll k)
{
    ll l = st, r = n - 1;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (a[mid] == k)
        {
            return true;
        }
        if (a[mid] < k)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll suffix[n];
    suffix[n - 1] = a[n - 1];
    for (ll i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] + a[i];
    }

    ll sum = 0;
    ll ans = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        sum += a[i];
        if (check(suffix, n, i + 1, sum))
        {
            ans = max(ans, sum);
        }
    }

    cout << ans << endl;

    return 0;
}