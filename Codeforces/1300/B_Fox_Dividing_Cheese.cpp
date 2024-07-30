#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll func(ll &x, ll &y, ll d)
{
    ll cnt = 0;
    while (x % d == 0)
    {
        x /= d;
        cnt++;
    }
    while (y % d == 0)
    {
        y /= d;
        cnt--;
    }
    return abs(cnt);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b;
    cin >> a >> b;
    ll cnt = 0;

    ll ans = func(a, b, 2) + func(a, b, 3) + func(a, b, 5);
    if (a == b)
    {
        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}