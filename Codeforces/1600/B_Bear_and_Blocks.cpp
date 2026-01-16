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
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    vector<ll> left(n), right(n);
    ll cur = 0;
    for (ll i = 0; i < n; i++)
    {
        cur = min(a[i], cur + 1);
        left[i] = cur;
    }
    cur = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        cur = min(a[i], cur + 1);
        right[i] = cur;
    }
    for (ll i = 0; i < n; i++)
    {
        ans = max(ans, min(left[i], right[i]));
    }
    cout << ans << endl;

    return 0;
}