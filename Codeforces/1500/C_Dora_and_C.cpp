#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n, a, b;
        cin >> n >> a >> b;
        ll arr[n];
        ll g = __gcd(a, b);
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr[i] %= g;
        }
        sort(arr, arr + n);
        ll ans = arr[n - 1] - arr[0];
        for (ll i = 1; i < n; i++)
        {
            ans = min(ans, arr[i - 1] + g - arr[i]);
        }
        cout << ans << endl;

        t--;
    }

    return 0;
}