#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

// 1 2 2 3 3 7 8 9

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
    ll ans = 0, l = 0, r = n - 1, st = 0;
    while (l < r)
    {
        ll sum = a[r] * (l - st + 2);
        if (a[r] > k)
        {
            ans++;
            r--;
        }
        else if (sum > k)
        {
            ans++;
            l++;
            r--;
            st = l;
        }
        else
        {
            l++;
        }
    }
    if (l == r && a[l] > k)
    {
        ans++;
    }
    cout << ans << endl;
    return 0;
}