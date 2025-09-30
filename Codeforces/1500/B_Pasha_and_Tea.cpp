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
    ll a[2 * n];
    for (ll i = 0; i < 2 * n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 2 * n);
    double x = min(a[0] * 1.0, a[n] / 2.0);
    double ans = x * n + 2 * x * n;
    ans = min(ans, k * 1.0);
    cout << fixed << setprecision(12);
    cout << ans << endl;

    return 0;
}