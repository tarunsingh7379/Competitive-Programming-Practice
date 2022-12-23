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
        ll n, k;
        cin >> n >> k;
        if (k != 0)
        {
            ll p = n / k;
            ll ans = n - p * k;
            cout << ans << endl;
        }
        else
        {
            cout << n << endl;
        }

        t--;
    }

    return 0;
}