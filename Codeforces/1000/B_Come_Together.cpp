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
        int xa, ya, xb, yb, xc, yc;
        cin >> xa >> ya >> xb >> yb >> xc >> yc;

        int ans = 0;
        if (xa <= min(xb, xc))
        {
            ans += min(xb, xc) - xa;
        }
        else if (xa >= max(xb, xc))
        {
            ans += xa - max(xb, xc);
        }

        if (ya <= min(yb, yc))
        {
            ans += min(yb, yc) - ya;
        }
        else if (ya >= max(yb, yc))
        {
            ans += ya - max(yb, yc);
        }
        ans++;
        cout << ans << endl;
        t--;
    }

    return 0;
}