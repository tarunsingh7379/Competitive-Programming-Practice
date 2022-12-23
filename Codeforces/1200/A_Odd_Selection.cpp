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
        ll odd = 0, even = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x % 2 != 0)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }

        ll flag = 0;
        for (ll i = 1; i <= odd; i += 2)
        {
            ll req = k - i;
            if (even >= req && req >= 0)
            {
                flag = 1;
                break;
            }
        }
        cout << (flag ? "Yes" : "No") << endl;

        t--;
    }

    return 0;
}