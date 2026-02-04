#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b, m;
    cin >> a >> b >> m;

    if (a >= m || b >= m)
    {
        cout << 0 << endl;
        return 0;
    }
    if (a <= 0 && b <= 0)
    {
        cout << -1 << endl;
        return 0;
    }
    if (a > b)
        swap(a, b);
    ll ans = 0;
    if (a < 0)
    {
        ll op = (-a + b - 1) / b;
        a += op * b;
        ans += op;
    }
    while (a < m && b < m)
    {
        if (a < b)
        {
            a += b;
        }
        else
        {
            b += a;
        }
        ans++;
    }
    cout << ans << endl;

    return 0;
}