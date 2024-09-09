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
    sort(a, a + n);
    ll mid = n / 2;
    ll ans = 0;
    for (ll i = mid - 1; i >= 0; i--)
    {
        if (a[i] > k)
        {
            ans += (a[i] - k);
        }
    }
    for (ll i = mid + 1; i < n; i++)
    {
        if (a[i] < k)
        {
            ans += (k - a[i]);
        }
    }
    ans += abs(a[mid] - k);
    cout << ans << endl;
    return 0;
}