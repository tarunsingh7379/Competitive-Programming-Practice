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
    vector<ll> a, b, c;
    for (ll i = 0; i < n; i++)
    {
        ll x, y, z;
        cin >> x >> y >> z;
        if (y == 1 && z == 1)
        {
            a.push_back(x);
        }
        if (y == 1 && z == 0)
        {
            b.push_back(x);
        }
        if (y == 0 && z == 1)
        {
            c.push_back(x);
        }
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    ll alice = a.size() + b.size();
    ll bob = a.size() + c.size();
    if (alice < k || bob < k)
    {
        cout << -1 << endl;
    }
    else
    {
        ll ans = 0;
        ll i = 0, j = 0;
        while (k && i < a.size() && j < min(b.size(), c.size()))
        {

            if (a[i] <= (b[j] + c[j]))
            {
                ans += a[i];
                i++;
            }
            else
            {
                ans += (b[j] + c[j]);
                j++;
            }

            k--;
        }
        while (k)
        {
            while (i < a.size() && k)
            {
                ans += a[i];
                i++;
                k--;
            }
            while (j < min(b.size(), c.size()) && k)
            {
                ans += (b[j] + c[j]);
                j++;
                k--;
            }
        }
        cout << ans << endl;
    }

    return 0;
}