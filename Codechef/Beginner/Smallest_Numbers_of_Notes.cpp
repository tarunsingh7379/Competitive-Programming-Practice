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
        ll a[6] = {1, 2, 5, 10, 50, 100};
        for (ll i = 5; i >= 0; i--)
        {
            ans = ans + n / a[i];
            n = n % a[i];
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}