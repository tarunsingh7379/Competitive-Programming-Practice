#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b;
    cin >> a >> b;

    ll g = __gcd(a, b);
    vector<ll> v;
    for (ll i = 1; i * i <= g; i++)
    {
        if (g % i == 0)
        {
            v.push_back(i);
            if (g / i != i)
            {
                v.push_back(g / i);
            }
        }
    }
    sort(v.begin(), v.end());

    ll q;
    cin >> q;
    while (q--)
    {
        ll low, high;
        cin >> low >> high;
        ll l = 0, r = v.size() - 1;
        ll ans = -1;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            if (v[mid] >= low && v[mid] <= high)
            {
                ans = v[mid];
                l = mid + 1;
            }
            else if (v[mid] < low)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}