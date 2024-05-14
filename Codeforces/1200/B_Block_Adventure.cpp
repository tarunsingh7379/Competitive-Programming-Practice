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
        ll n, m, k;
        cin >> n >> m >> k;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll have = m;
        ll ok = 1;
        for (ll i = 0; i < n - 1; i++)
        {
            if (a[i] < a[i + 1])
            {
                ll d = a[i + 1] - a[i];
                if (d > k)
                {
                    ll req = d - k;
                    have -= req;
                    if (have < 0)
                    {
                        ok = 0;
                        break;
                    }
                }
                else
                {
                    ll can_take = k - d;
                    have = have + min(can_take, a[i]);
                }
            }
            else
            {
                ll can_take = a[i] - a[i + 1] + k;
                have = have + min(can_take, a[i]);
            }
        }
        if (ok)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        t--;
    }

    return 0;
}