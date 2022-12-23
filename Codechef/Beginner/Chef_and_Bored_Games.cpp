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
        ll ans = 0;
        ans = n * n;
        for (ll i = 3; i <= n; i += 2)
        {
            ans = ans + (n - i + 1) * (n - i + 1);
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}