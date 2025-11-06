#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double n, d, v, g, r;
    cin >> n >> d >> v >> g >> r;

    double ans = 0;
    int cur = 0;
    while (cur < n)
    {
        int new_d = cur + d;
        if (new_d < n)
        {
            cur += d;
            ans = ans + d / v;
        }
        else
        {
            int rem = n - cur;
            ans = ans + rem / v;
            break;
        }
        double x = ans - floor(ans / (g + r)) * (g + r);
        if (x >= g)
        {
            ans += (g + r - ans);
        }
    }
    cout << fixed << setprecision(12);
    cout << ans << endl;

    return 0;
}