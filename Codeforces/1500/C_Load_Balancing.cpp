#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += a[i];
    }
    sort(a, a + n);
    reverse(a, a + n);
    ll ma = sum / n, r = sum % n;

    for (ll i = 0; i < r; i++)
    {
        ans += abs(a[i] - (ma + 1));
    }
    for (ll i = r; i < n; i++)
    {
        ans += abs(a[i] - ma);
    }
    ans /= 2;

    cout << ans << endl;

    return 0;
}