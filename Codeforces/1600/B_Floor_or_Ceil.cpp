#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func1(ll x, ll n)
{
    while (n > 0)
    {
        x /= 2;
        n--;
        if (x == 0)
            break;
    }
    return x;
}

ll func2(ll x, ll m)
{
    while (m > 0)
    {
        x = (x + 1) / 2;
        m--;
        if (x <= 1)
            break;
    }
    return x;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t)
    {
        ll x, n, m;
        cin >> x >> n >> m;
        ll ans1 = func1(func2(x, m), n);
        ll ans2 = func2(func1(x, n), m);
        cout << ans1 << " " << ans2 << endl;
        t--;
    }

    return 0;
}