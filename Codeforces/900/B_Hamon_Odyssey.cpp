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
        int x = a[0];
        for (int i = 1; i < n; i++)
        {
            x = x & a[i];
        }
        if (x > 0)
        {
            cout << 1 << endl;
        }
        else
        {
            x = a[0];
            int ans = 0;
            for (int i = 1; i < n; i++)
            {
                if (x == 0)
                {
                    ans++;
                    x = a[i];
                }
                else
                {
                    x = x & a[i];
                }
            }
            if (x == 0)
            {
                ans++;
            }
            cout << ans << endl;
        }
        t--;
    }

    return 0;
}