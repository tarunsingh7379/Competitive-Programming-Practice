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
        ll x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        ll ans = 0;
        if (x1 == x2 || y1 == y2)
        {
            ans = abs(x1 - x2) + abs(y1 - y2);
        }
        else
        {
            ans = abs(x1 - x2) + abs(y1 - y2) + 2;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}