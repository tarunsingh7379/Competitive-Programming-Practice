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
        a[i] = abs(a[i]);
    }
    sort(a, a + n);
    ll ans = 0, j = 0;
    for (ll i = 0; i < n; i++)
    {
        while (j < n && a[j] <= 2 * a[i])
            j++;
        ans += (j - i - 1);
    }
    cout << ans << endl;

    return 0;
}