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
    ans = ans + d / v;
    double x = ans - floor(ans / (g + r)) * (g + r);
    if (x >= g)
    {
        ans += (g + r - x);
    }
    int rem = n - d;
    ans = ans + rem / v;

    cout << fixed << setprecision(12);
    cout << ans << endl;

    return 0;
}