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
        ll x, y;
        cin >> x >> y;
        ll ans = 0;
        if ((y - x) >= 0)
        {
            ans = 0;
        }
        else
        {
            ans = 0;
            while (y)
            {
                y--;
                ans++;
                x = x - 2;
                if ((y - x) >= 0)
                {
                    break;
                }
            }
        }

        cout << ans << endl;
        t--;
    }

    return 0;
}