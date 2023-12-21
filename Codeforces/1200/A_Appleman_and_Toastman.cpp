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
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + n);
    ll ans = sum;
    for (ll i = 0; i < n; i++)
    {
        ans += sum;
        sum -= a[i];
    }
    cout << ans - a[n - 1] << endl;

    return 0;
}