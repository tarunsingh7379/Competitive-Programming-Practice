#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    ll a[n], b[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n);
    bool ok = true;
    ll ans = 1e18;
    for (ll i = 0; i < n; i++)
    {
        ll x = (b[0] - a[i] + m) % m;
        vector<int> temp;
        ok = true;
        for (ll j = 0; j < n; j++)
        {
            temp.push_back((a[j] + x) % m);
        }
        sort(temp.begin(), temp.end());
        for (ll j = 0; j < n; j++)
        {
            if (temp[j] != b[j])
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            ans = min(ans, x);
        }
    }
    cout << ans << endl;

    return 0;
}