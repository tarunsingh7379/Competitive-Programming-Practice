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
        ll a, b, k;
        cin >> a >> b >> k;
        ll ans = (k / 2) * (a - b);
        if (k % 2 != 0)
        {
            ans += a;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}