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
    for (ll i = 0; i < n; i++)
    {
        ll j = i;
        while (j < n - 1 && a[j + 1] <= 2 * a[j])
        {
            j++;
        }
        ans = max(ans, j - i + 1);
        i = j;
    }
    cout << ans << endl;

    return 0;
}