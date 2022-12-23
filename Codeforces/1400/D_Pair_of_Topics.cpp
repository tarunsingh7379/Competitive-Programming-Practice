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
    ll b[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    vector<ll> v;
    for (ll i = 0; i < n; i++)
    {
        v.push_back(a[i] - b[i]);
    }
    sort(v.begin(), v.end());
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll l = i + 1, r = n - 1;
        ll ind = -1;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if ((v[i] + v[mid]) > 0)
            {
                ind = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (ind != -1)
        {
            ans = ans + (n - ind);
        }
    }
    cout << ans << endl;
    return 0;
}