#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> a(2 * n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i + n] = a[i];
    }
    ll s, f;
    cin >> s >> f;
    ll len = f - s;
    vector<ll> prefix(2 * n, 0);
    prefix[0] = a[0];
    for (ll i = 1; i < 2 * n; i++)
    {
        prefix[i] = prefix[i - 1] + a[i];
    }
    ll cnt = 0, ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll l = (s - i + n) % n;
        ll r = l + len - 1;
        ll cur = prefix[r];
        if (l - 1 >= 0)
        {
            cur -= prefix[l - 1];
        }
        if (cur > cnt)
        {
            cnt = cur;
            ans = i;
        }
    }
    cout << ans << endl;

    return 0;
}