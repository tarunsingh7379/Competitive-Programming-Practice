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
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll ans[n] = {0};
        ll cnt = 0;
        ans[n - 1] = 1;
        for (ll i = n - 2; i >= 0; i--)
        {
            if ((a[i] >= 0 && a[i + 1] < 0) || (a[i] < 0 && a[i + 1] >= 0))
            {
                ans[i] = ans[i + 1] + 1;
            }
            else
            {
                ans[i] = 1;
            }
        }
        for (ll i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
        t--;
    }

    return 0;
}