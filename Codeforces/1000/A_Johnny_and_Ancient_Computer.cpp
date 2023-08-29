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
        ll a, b;
        cin >> a >> b;
        ll x = 0, y = 0;
        while (a % 2 == 0)
        {
            x++;
            a /= 2;
        }
        while (b % 2 == 0)
        {
            y++;
            b /= 2;
        }
        if (a != b)
        {
            cout << -1 << endl;
        }
        else
        {
            int d = abs(x - y);
            cout << d / 3 + (d % 3 != 0) << endl;
        }
        t--;
    }

    return 0;
}