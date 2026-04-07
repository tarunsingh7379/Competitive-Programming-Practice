#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int get_cost(vector<ll> &a, ll k)
{
    ll ma = 0;
    for (ll i = 0; i < a.size(); i++)
    {
        if (a[i] % k == 0)
            return 0;
        ma = max(ma, a[i] % k);
    }
    return (ma == 0 ? 0 : k - ma);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (k != 4)
        {
            cout << get_cost(a, k) << endl;
        }
        else
        {
            ll cost = get_cost(a, k);
            ll cnt = 0;
            for (ll i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                {
                    cnt++;
                }
            }
            if (cnt >= 2)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << min(cost, 2 - cnt) << endl;
            }
        }

        t--;
    }

    return 0;
}