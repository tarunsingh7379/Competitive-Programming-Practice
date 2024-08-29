#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    double x = 1.0 * a / b;
    double y = 1 - (1 - 1.0 * a / b) * (1 - 1.0 * c / d);
    double ans = x / y;
    cout << fixed << setprecision(12) << ans << endl;

    return 0;
}