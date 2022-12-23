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
        ll ans = 0, sum = 0;
        ll flag = 0;
        for (ll i = 0; i < n; i++)
        {
            ll till, data;
            cin >> till >> data;
            if (flag == 0)
            {
                sum = sum + till;
                if (sum <= k)
                {
                }
                else
                {
                    ll d = sum - k;
                    ans = ans + d * data;
                    flag = 1;
                }
            }
            else
            {
                ans = ans + till * data;
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}