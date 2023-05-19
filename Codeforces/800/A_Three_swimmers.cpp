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
        ll n, a, b, c;
        cin >> n >> a >> b >> c;
        ll ans = 1e18;
        ll x = (n + a - 1) / a;
        ans = min(ans, a * x - n);
        x = (n + b - 1) / b;
        ans = min(ans, b * x - n);
        x = (n + c - 1) / c;
        ans = min(ans, c * x - n);
        cout << ans << endl;
        t--;
    }

    return 0;
}