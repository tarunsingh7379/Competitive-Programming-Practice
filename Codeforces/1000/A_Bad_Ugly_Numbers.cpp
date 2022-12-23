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
        if (n == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            ll x = 2 * (n - 1) + 3;
            ll cnt = n - 1;
            if (x % 3 == 0)
            {
                cout << 3;
                cnt--;
            }
            for (int i = 0; i < cnt; i++)
            {
                cout << 2;
            }
            cout << 3 << endl;
        }
        t--;
    }

    return 0;
}