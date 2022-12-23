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
        ll l, r;
        cin >> l >> r;
        ll mi = l + l;
        ll ma = r + r;
        ll ans = ma - mi + 1;
        cout << ans << endl;
        t--;
    }

    return 0;
}