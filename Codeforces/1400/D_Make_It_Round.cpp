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
        ll n, m;
        cin >> n >> m;
        ll x = n;
        ll cnt2 = 0, cnt5 = 0;
        ll k = 1;
        while (x % 2 == 0)
        {
            x /= 2;
            cnt2++;
        }
        while (x % 5 == 0)
        {
            x /= 5;
            cnt5++;
        }
        while (cnt2 < cnt5 && k * 2 <= m)
        {
            cnt2++;
            k *= 2;
        }
        while (cnt5 < cnt2 && k * 5 <= m)
        {
            cnt5++;
            k *= 5;
        }
        while (k * 10 <= m)
        {
            k *= 10;
        }
        if (k == 1)
        {
            cout << n * m << endl;
        }
        else
        {
            cout << n * (k * (m / k)) << endl;
        }
        t--;
    }

    return 0;
}