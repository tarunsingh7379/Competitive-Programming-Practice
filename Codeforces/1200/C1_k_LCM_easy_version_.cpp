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
        ll n, k;
        cin >> n >> k;
        if (n % 2 == 0)
        {
            ll x = n / 2;
            if (x % 2 == 0)
            {
                cout << x << " " << x / 2 << " " << x / 2 << endl;
            }
            else
            {
                cout << (x - 1) << " " << (x - 1) << " " << 2 << endl;
            }
        }
        else
        {
            cout << n / 2 << " " << n / 2 << " " << 1 << endl;
        }
        t--;
    }

    return 0;
}