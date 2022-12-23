#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, l;
    cin >> n >> l;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    double ans = 0;

    if (a[0] != 0)
    {
        ans = a[0];
    }

    for (ll i = 0; i < n - 1; i++)
    {
        double x = (a[i + 1] - a[i]) / 2.0;
        ans = max(ans, x);
    }
    if (a.back() != l)
    {
        ans = max(ans, (l - a.back()) * 1.0);
    }
    cout << fixed << setprecision(12);
    cout << ans << endl;

    return 0;
}