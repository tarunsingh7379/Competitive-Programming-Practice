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
        ll a, b;
        cin >> a >> b;
        ll n, m;
        cin >> n >> m;
        ll q = n / (m + 1);
        ll ans = q * (min(m * a, (m + 1) * b));
        ll rem = n - q * (m + 1);
        ans = ans + rem * min(a, b);
        cout << ans << endl;
        t--;
    }

    return 0;
}