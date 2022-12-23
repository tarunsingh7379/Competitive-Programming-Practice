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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        vector<ll> v1, v2;
        for (ll i = 1; i * i <= a; i++)
        {
            if (a % i == 0)
            {
                v1.push_back(i);
                if (i != (a / i))
                {
                    v1.push_back(a / i);
                }
            }
        }
        for (ll i = 1; i * i <= b; i++)
        {
            if (b % i == 0)
            {
                v2.push_back(i);
                if (i != (b / i))
                {
                    v2.push_back(b / i);
                }
            }
        }
        int flag = 0;
        for (auto val1 : v1)
        {
            for (auto val2 : v2)
            {
                ll val = val1 * val2;
                ll p = a * b;
                ll x = (c / val) * val;
                if (x > a)
                {
                    ll req = p / __gcd(x, p);
                    ll y = (d / req) * req;
                    if (y > b)
                    {
                        cout << x << " " << y << endl;
                        flag = 1;
                        break;
                    }
                }
            }
            if (flag == 1)
            {
                break;
            }
        }
        if (flag == 0)
        {
            cout << -1 << " " << -1 << endl;
        }
        t--;
    }

    return 0;
}