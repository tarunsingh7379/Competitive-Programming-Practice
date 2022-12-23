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
        ll n;
        cin >> n;
        ll a[n];
        set<ll> st;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            st.insert(a[i]);
        }
        ll flag = 0;
        if (st.size() == 1)
        {
            flag = 1;
        }
        else
        {
            for (ll i = 0; i < n - 1; i++)
            {
                ll x1 = 0, x2 = 0;
                for (ll j = 0; j <= i; j++)
                {
                    x1 ^= a[j];
                }
                ll pos = -1;
                for (ll j = i + 1; j < n; j++)
                {
                    x2 ^= a[j];
                    if (x2 == x1)
                    {
                        pos = i + 1;
                        break;
                    }
                }
                ll x3 = 0;
                if (pos != -1)
                {
                    for (ll j = pos; j < n; j++)
                    {
                        x3 ^= a[j];
                    }
                    if (x3 == x2 || x3 == 0)
                    {
                        flag = 1;
                        break;
                    }
                }
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
        t--;
    }

    return 0;
}