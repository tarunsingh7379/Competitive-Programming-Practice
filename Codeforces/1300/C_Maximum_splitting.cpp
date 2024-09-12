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
        if (n < 12)
        {
            if (n == 8 || n == 10)
            {
                cout << 2 << endl;
            }
            else if (n == 4 || n == 6 || n == 9)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            ll ans = 0;
            ans = n / 4;
            if (n % 4 == 1 || n % 4 == 3)
            {
                ans--;
            }
            cout << ans << endl;
        }
        t--;
    }

    return 0;
}