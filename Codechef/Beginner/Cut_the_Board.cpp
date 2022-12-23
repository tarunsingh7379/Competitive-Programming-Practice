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
        ll n, m;
        cin >> n >> m;
        if (n == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            ll ans = (m - 1) * (n - 1);
            cout << ans << endl;
        }
        t--;
    }

    return 0;
}