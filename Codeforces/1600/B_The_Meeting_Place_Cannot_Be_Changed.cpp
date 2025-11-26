#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

bool check(vector<ll> &a, vector<ll> &b, double k)
{
    double l = -1e15, r = 1e15;
    for (ll i = 0; i < a.size(); i++)
    {
        l = max(l, a[i] - 1.0 * b[i] * k);
        r = min(r, a[i] + 1.0 * b[i] * k);
    }
    return l <= r;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    double ans = 0;
    double l = 0, r = 1e10;
    for (ll i = 0; i < 100; i++)
    {
        double mid = (l + r) / 2;
        if (check(a, b, mid))
        {
            ans = mid;
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    cout << fixed << setprecision(12);
    cout << ans << endl;

    return 0;
}