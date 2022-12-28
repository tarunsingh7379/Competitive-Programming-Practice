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
        ll a = 1, b = n - 1;
        for (ll i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                ll x = i;
                ll y = n / i;
                if (max(x, n - x) < max(a, b))
                {
                    a = x;
                    b = n - x;
                }
                if (max(y, n - y) < max(a, b))
                {
                    a = y;
                    b = n - y;
                }
            }
        }
        cout << a << " " << b << endl;
        t--;
    }

    return 0;
}