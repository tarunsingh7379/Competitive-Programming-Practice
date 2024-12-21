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
        ll sum = 0, x = 0;
        for (ll i = 0; i < n; i++)
        {
            ll y;
            cin >> y;
            sum += y;
            x = x ^ y;
        }
        cout << 2 << endl;
        cout << x << " " << sum + x << endl;

        t--;
    }
    return 0;
}