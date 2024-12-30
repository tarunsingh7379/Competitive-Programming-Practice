#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> v;
    for (ll i = 1; i < n; i++)
    {
        v.push_back(a[i - 1] - a[i]);
    }
    sort(v.begin(), v.end());
    ll ans = 0;
    for (ll i = 0; i < k - 1; i++)
    {
        ans += v[i];
    }
    cout << ans + (a[n - 1] - a[0]) << endl;

    return 0;
}