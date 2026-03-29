#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double m, n;
    cin >> m >> n;
    double ans = 0;
    for (ll i = 1; i <= m; i++)
    {
        double p = pow((i - 1) / m, n);
        double q = 1 - p;
        ans = ans + q;
    }
    cout << fixed << setprecision(12);
    cout << ans << endl;

    return 0;
}