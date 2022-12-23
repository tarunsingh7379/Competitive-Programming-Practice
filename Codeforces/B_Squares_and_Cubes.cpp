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
        ll n;
        cin >> n;
        ll a = sqrt(n);
        ll b = cbrt(n);
        ll c = cbrt(sqrt(n));
        ll ans = a + b - c;
        cout << ans << endl;
        t--;
    }

    return 0;
}