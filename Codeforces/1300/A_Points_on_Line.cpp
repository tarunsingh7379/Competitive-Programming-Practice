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

    ll ans = 0;
    ll l = 0, len = 0;
    for (ll r = 0; r < n; r++)
    {
        while (l < r && a[r] - a[l] > k)
        {
            l++;
        }
        if (r - l + 1 >= 3)
        {
            len = r - l;
            ans += (len) * (len - 1) / 2;
        }
    }
    cout << ans << endl;

    return 0;
}