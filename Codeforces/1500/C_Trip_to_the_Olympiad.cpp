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
        ll l, r;
        cin >> l >> r;
        ll x = (l ^ r);
        ll k = 31 - __builtin_clz(x);
        ll a = l | ((1 << k) - 1);
        ll b = a + 1;
        ll c = (a == l ? r : l);
        cout << a << " " << b << " " << c << endl;
        t--;
    }

    return 0;
}