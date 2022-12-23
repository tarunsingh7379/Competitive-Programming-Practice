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
        ll a, b, x;
        cin >> a >> b >> x;
        ll d = b - a;
        ll ans = d / x;
        cout << ans << endl;
        t--;
    }

    return 0;
}