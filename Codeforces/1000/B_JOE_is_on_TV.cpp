#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    double ans = 0;
    for (ll i = n; i >= 1; i--)
    {
        ans = ans + 1.0 / i;
    }
    cout << fixed << setprecision(12) << ans << endl;
    return 0;
}