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
        ll intro[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> intro[i];
        }
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ll m;
            cin >> m;
            for (ll j = 0; j < m; j++)
            {
                ll dur;
                cin >> dur;
                if (j != 0)
                {
                    ans = ans + (dur - intro[i]);
                }
                else
                {
                    ans = ans + dur;
                }
            }
        }
        cout << ans << endl;
        t--;
    }

    return 0;
}