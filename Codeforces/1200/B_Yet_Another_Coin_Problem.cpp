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
        ll ans = INT_MAX;
        for (ll one = 0; one <= 2; one++)
        {
            for (ll three = 0; three <= 1; three++)
            {
                for (ll six = 0; six <= 4; six++)
                {
                    for (ll ten = 0; ten <= 2; ten++)
                    {
                        ll sum = one + 3 * three + 6 * six + 10 * ten;
                        if (n >= sum && (n - sum) % 15 == 0)
                        {
                            ans = min(ans, one + three + six + ten + (n - sum) / 15);
                        }
                    }
                }
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}