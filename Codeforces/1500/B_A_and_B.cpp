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
        if (a > b)
        {
            swap(a, b);
        }
        if (a == b)
        {
            cout << 0 << endl;
        }
        else
        {
            ll ans = 1;
            for (ll i = 1;; i++)
            {
                a += i;
                if (a == b)
                {
                    ans = i;
                    break;
                }
                if (a > b && (a - b) % 2 == 0)
                {
                    ans = i;
                    break;
                }
            }
            cout << ans << endl;
        }
        t--;
    }

    return 0;
}