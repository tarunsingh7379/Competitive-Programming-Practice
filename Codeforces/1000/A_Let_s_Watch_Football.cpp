#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a, b, c;
    cin >> a >> b >> c;
    ll x = (c * a + b - 1) / b;
    ll flag = 0;
    for (ll i = 1; i <= x; i++)
    {
        flag = 1;
        for (ll j = i; j <= c + i; j++)
        {
            if (b * j < (j - i) * c)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}