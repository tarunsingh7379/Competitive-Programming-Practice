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
        int x, y, e;
        cin >> x >> y >> e;
        int ans = 0;
        x += e;
        int d = x - y;
        if (d > 0)
        {
            ans = ans + 1 + min(e, (d - 1) / 2);
        }
        cout << ans << endl;
        t--;
    }
    return 0;
}