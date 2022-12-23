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
        ll a, b;
        cin >> a >> b;
        ll sum = a + b;
        ll req[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
        ll ans = 0;
        while (sum)
        {
            ll r = sum % 10;
            ans = ans + req[r];
            sum = sum / 10;
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}