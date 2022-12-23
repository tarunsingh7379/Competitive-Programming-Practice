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
        ll a[10];
        for (ll i = 0; i < 10; i++)
        {
            cin >> a[i];
        }
        ll k;
        cin >> k;
        ll ans = 0;
        for (ll i = 9; i >= 0; i--)
        {
            k = k - a[i];
            if (k < 0)
            {
                ans = i + 1;
                break;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}