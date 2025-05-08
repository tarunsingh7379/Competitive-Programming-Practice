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
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> a(k), b(k);
        for (ll i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < k; i++)
        {
            cin >> b[i];
        }

        while (q--)
        {
            ll d;
            cin >> d;
            ll ans = 0;
            ll ind = upper_bound(a.begin(), a.end(), d) - a.begin();
            ind--;
            if (d < a[0])
            {
                ans += (d * (b[0])) / (a[0]);
                cout << ans << " ";
                continue;
            }
            ans += b[ind];
            ll rem_d = d - a[ind];
            if (rem_d > 0)
                ans += (rem_d * (b[ind + 1] - b[ind])) / (a[ind + 1] - a[ind]);

            cout << ans << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}