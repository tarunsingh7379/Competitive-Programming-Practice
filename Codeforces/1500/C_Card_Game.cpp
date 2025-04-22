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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n == 1)
        {
            cout << max(a[0], 0) << endl;
        }
        else
        {
            ll ans = 0;
            for (int i = 2; i < n; i++)
            {
                ans += max(0, a[i]);
            }
            if (a[0] > 0)
            {
                ans += a[0] + max(a[1], 0);
            }
            else
            {
                ans += max(a[0] + a[1], 0);
            }
            cout << ans << endl;
        }

        t--;
    }

    return 0;
}