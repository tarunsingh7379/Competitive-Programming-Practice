#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

/*
x a p
b zz c
y d q

x+b = p+c
p = x+b-c

x+a = y+d
y = x + a - d

x+a+b= c+d+q
q = x + a + b -c - d
*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    ll cnt = 0;
    for (ll x = 1; x <= n; x++)
    {
        ll y = x + a - d;
        ll p = x + b - c;
        ll q = x + a + b - c - d;
        if (y >= 1 && y <= n && p >= 1 && p <= n && q >= 1 && q <= n)
        {
            cnt++;
        }
    }
    cout << cnt * n << endl;

    return 0;
}