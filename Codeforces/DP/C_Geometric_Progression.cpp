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
    map<ll, ll> right;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        right[a[i]]++;
    }
    ll ans = 0;
    right[a[0]]--;
    map<ll, ll> left;
    left[a[0]]++;
    for (ll i = 1; i < n - 1; i++)
    {
        right[a[i]]--;
        if (a[i] % k == 0)
        {
            ans = ans + (left[a[i] / k] * right[a[i] * k]);
        }
        left[a[i]]++;
    }
    cout << ans << endl;

    return 0;
}