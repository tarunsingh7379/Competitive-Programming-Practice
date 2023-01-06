#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

void func(ll p, ll q, ll x, ll &ans)
{
    while (p % x == 0)
    {
        p /= x;
        if (p % q != 0)
        {
            ans = max(ans, p);
            break;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll p, q;
        cin >> p >> q;

        if (p < q)
        {
            cout << p << endl;
        }
        else if (p == q)
        {
            ll ans = 1;
            for (ll i = 2; i * i <= p; i++)
            {
                if (p % i == 0)
                {
                    ans = max(ans, i);
                    ans = max(ans, p / i);
                }
            }
            cout << ans << endl;
        }
        else
        {
            if (p % q != 0)
            {
                cout << p << endl;
            }
            else
            {
                ll ans = 1;
                for (ll i = 2; i * i <= q; i++)
                {
                    if (q % i == 0)
                    {
                        ll x = i;
                        ll y = q / i;
                        ans = max(ans, x);
                        ans = max(ans, y);
                        func(p, q, x, ans);
                        func(p, q, y, ans);
                    }
                }
                func(p, q, q, ans);
                cout << ans << endl;
            }
        }

        t--;
    }

    return 0;
}