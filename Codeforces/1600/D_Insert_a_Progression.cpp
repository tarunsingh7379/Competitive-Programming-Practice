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
        ll n, x;
        cin >> n >> x;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            v.push_back(a);
        }
        ll mi = v[0], ma = v[0];
        for (ll i = 0; i < n; i++)
        {
            mi = min(mi, v[i]);
            ma = max(ma, v[i]);
        }
        ll cost = 0;
        ll low = min(mi - 1, x);
        if (low > 0)
        {
            ll temp = abs(low - v[0]);
            for (ll i = 0; i < n - 1; i++)
            {
                temp = min(temp, abs(v[i + 1] - low) + abs(v[i] - 1) - abs(v[i + 1] - v[i]));
            }
            temp = min(temp, abs(v[n - 1] - 1));
            temp = min(temp, abs(v[0] - 1));
            for (ll i = 0; i < n - 1; i++)
            {
                temp = min(temp, abs(v[i + 1] - 1) + abs(v[i] - low) - abs(v[i + 1] - v[i]));
            }
            temp = min(temp, abs(v[n - 1] - low));
            cost = cost + temp + (low - 1);
        }
        if (x > ma)
        {
            ll upper = ma + 1;
            ll temp = abs(x - v[0]);
            for (ll i = 0; i < n - 1; i++)
            {
                temp = min(temp, abs(v[i + 1] - x) + abs(v[i] - upper) - abs(v[i + 1] - v[i]));
            }
            temp = min(temp, abs(v[n - 1] - upper));
            temp = min(temp, abs(upper - v[0]));
            for (ll i = 0; i < n - 1; i++)
            {
                temp = min(temp, abs(v[i + 1] - upper) + abs(v[i] - x) - abs(v[i + 1] - v[i]));
            }
            temp = min(temp, abs(v[n - 1] - x));
            cost = cost + temp + (x - ma - 1);
        }

        ll ans = cost;
        for (ll i = 0; i < v.size() - 1; i++)
        {
            ans = ans + abs(v[i + 1] - v[i]);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}