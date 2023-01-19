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
        int w, d, h;
        cin >> w >> d >> h;
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int ans = abs(x1 - x2) + h + min(y1 + y2, d - y1 + d - y2);
        ans = min(ans, abs(y1 - y2) + h + min(x1 + x2, w - x1 + w - x2));
        cout << ans << endl;
        t--;
    }

    return 0;
}