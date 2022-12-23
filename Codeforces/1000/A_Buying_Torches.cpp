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
        ll x, y, k;
        cin >> x >> y >> k;
        ll ans = (k * y + k - 1 + x - 2) / (x - 1);
        cout << ans + k << endl;
        t--;
    }

    return 0;
}