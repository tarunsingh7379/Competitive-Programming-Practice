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
        ll a, b, n;
        cin >> a >> b >> n;
        ll ans = 0;
        if (n % 2 == 1)
        {
            a = 2 * a;
        }

        ans = max(a, b) / min(a, b);
        cout << ans << endl;
        t--;
    }

    return 0;
}