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
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool all_same = true;
        for (ll i = 1; i < n; i++)
        {
            if (a[i] != a[i - 1])
            {
                all_same = false;
                break;
            }
        }
        if (all_same)
        {
            cout << 0 << endl;
            continue;
        }
        set<ll> pos, neg;
        ll cnt = 0;
        for (ll i = 1; i < n; i++)
        {
            ll d = a[i] - a[i - 1];
            if (d > 0)
            {
                pos.insert(d);
            }
            else if (d < 0)
            {
                neg.insert(-d);
            }
            else
            {
                cnt++;
            }
        }

        if (cnt > 0)
        {
            cout << -1 << endl;
        }
        else if (pos.size() == 0 || neg.size() == 0)
        {
            cout << 0 << endl;
        }
        else if (pos.size() > 1 || neg.size() > 1)
        {
            cout << -1 << endl;
        }
        else
        {
            ll c = *pos.begin();
            ll m = c + *neg.begin();
            bool ok = true;
            for (ll i = 1; i < n; i++)
            {
                ll x = (a[i - 1] + c) % m;
                if (x != a[i])
                {
                    ok = false;
                    break;
                }
            }
            if (ok && a[0] < m)
            {
                cout << m << " " << c << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}