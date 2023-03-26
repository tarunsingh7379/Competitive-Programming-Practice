#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n, q;
        cin >> n >> q;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> prefix(n);
        prefix[0] = a[0];
        for (ll i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + a[i];
        }
        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            l--;
            r--;
            ll sum = prefix[r];
            if (l - 1 >= 0)
            {
                sum -= prefix[l - 1];
            }
            ll total = prefix[n - 1];
            ll have = total - sum + (r - l + 1) * k;
            if (have % 2 != 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        t--;
    }

    return 0;
}